//============================================================================
// Name        : Jay Spears
// Description : Module 5 User Input Program
//============================================================================

#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

/*This is a program that appends data to an existing text file without erasing
 * the data currently found in it.*/

// Appends user input data to existingFile
void appendToFile(const std::string& existingFile, const std::string& data) {
    std::ofstream file(existingFile, std::ios_base::app);
    if (file.is_open()) {
        file << data << std::endl;
        std::cout << "Data appended to " << existingFile << " successfully." << std::endl;
    } else {
        std::cerr << "Error: Unable to open file " << existingFile << " for appending." << std::endl;
    }
}

// Reverses all characters in existingFile and stores it in reversedFile
void reverseFileContents(const std::string& inputFilename, const std::string& outputFilename) {
    std::ifstream inputFile(inputFilename);
    std::ofstream outputFile(outputFilename);

    if (inputFile.is_open() && outputFile.is_open()) {
        std::string line;
        while (std::getline(inputFile, line)) {
            std::reverse(line.begin(), line.end());
            outputFile << line << std::endl;
        }
        std::cout << "Confirmed: File contents reversed and saved to " << outputFilename << " successfully." << std::endl;
    } else {
        std::cerr << "Error" << std::endl;
    }
}

// Create variables for input and output files
int main() {
    std::string existingFile = "CSC450_CT5_mod5.txt";
    std::string reversedFile = "CSC450-mod5-reverse.txt";
    std::string data;

//  Prompt user for input
    std::cout << "Enter data to append to the " + existingFile + " file: ";
    std::getline(std::cin, data);

    appendToFile(existingFile, data);
    reverseFileContents(existingFile, reversedFile);

    return 0;
    }
