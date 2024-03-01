//============================================================================
// Name        : Jay Spears
// Description : Module 3: Integer Pointers Program
//============================================================================

#include <iostream>
using namespace std;

int main() {
//	 Create integer variables
    int value1;
	int value2;
	int value3;

//     Get inputs from the user and store them in variables
    cout << "Enter the 1st integer: ";
    cin >> value1;

    cout << "Enter the 2nd integer: ";
    cin >> value2;

	cout << "Enter the 3rd integer: ";
	cin >> value3;

//     Create integer pointers
    int *ptr1 = new int(value1);
    int *ptr2 = new int(value2);
    int *ptr3 = new int(value3);

//     Display variables
    cout << "\nYou have entered:\n";
    cout << "Value 1: " << value1 << endl;
    cout << "Value 2: " << value2 << endl;
    cout << "Value 3: " << value3 << endl;

//    Display pointers
    cout << "\nPointer contents:\n";
    cout << "Pointer 1: " << *ptr1 << endl;
    cout << "Pointer 2: " << *ptr2 << endl;
    cout << "Pointer 3: " << *ptr3 << endl;

//    Delete pointer memory
    delete ptr1;
    delete ptr2;
    delete ptr3;

    return 0;
}
