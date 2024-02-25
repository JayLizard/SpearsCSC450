//============================================================================
// Name        : Jay Spears
// Author      : Jay Spears
// Version     : N/A
// Copyright   : N/A
// Description : Module 2: String Input Console Application
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {
	int i;
	string string1;
	string string2;
	string combined;

	for (i = 0; i <3; ++i){
	cout << "Enter a string: " << endl;
	getline(cin, string1);

	cout << "Enter another string: " << endl;
	getline(cin, string2);

	combined = string1 + string2;

	cout <<"Your two strings put together: " << combined << endl;
	}
return 0;
}
