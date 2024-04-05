#include <iostream>
#include <thread>
#include <mutex>

std::mutex mtx; // Mutex for protecting shared resources

void countUp() {
    for (int i = 1; i <= 20; ++i) {
        std::lock_guard<std::mutex> lock(mtx); // Lock mutex to ensure thread safety
        std::cout << "Counting up: " << i << std::endl;
    }
}

void countDown() {
    for (int i = 20; i >= 0; --i) {
        std::lock_guard<std::mutex> lock(mtx); // Lock mutex to ensure thread safety
        std::cout << "Counting down: " << i << std::endl;
    }
}

int main() {
    std::thread t1(countUp);
    std::thread t2(countDown);

    t1.join();
    t2.join();

    return 0;
}
