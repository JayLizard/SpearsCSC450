//============================================================================
// Name        : Module1.cpp
// Author      : Jay Spears
// Version     : N/A
// Copyright   : N/A
// Description : Module 1: Prints the name and address for a fictional person
//============================================================================

#include <iostream>
#include <string>
using namespace std;

//Main method
int main() {
	//Declare variables
	string firstName = "Peter";
	string lastName = "Griffin";
	string address = "31 Spooner St.";
	string city = "Quahog";
	string state = "RI";
	int zipCode = 39547;

//Print Statements
	cout << firstName << " " << lastName << endl;
	cout << address << endl;
	cout << city << ", " << state << " " << zipCode <<endl;

	//Return statement
	return 0;
}
