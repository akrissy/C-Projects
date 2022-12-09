/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Professor Madhvi Shah
 * Programming Classwork 5 Part 1
 * Computer/Platform/Compiler: Windows 10 Visual Studio 2022
 * Description: Using loops to display rows of stars
 * Due Date: 10/23/2022
 * I pledge that I have completed the programming assignment independently.
 I have not copied the code from a student or any source.
 I have not given my code to any student.
 Print your name here: Andrea Almeda
*/

#include <iostream>
using namespace std;

int main() {
	
	int a = 1,
		b = 1;

	cout << "(i)\n";
	while (a <= 10) {
		cout << "*";
		a++;
	}

	cout << "\n\n(ii)\n";
	while (b <= 20) {
		cout << "*";
		b++;
	}

	cout << "\n\n(iii)";
	for (int row = 0; row <= 10; row++) { // How many rows of stars
		for (int star = 0; star < row; star++) { // Adding +1 stars to each row
			cout << "*"; // Print out the row
		}
		cout << endl; // Move to the next row
	}

	cout << "\n(iv)";
	for (int row = 0; row <= 20; row++) {
		for (int star = 0; star < row; star++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << "\n(v)\n";
	for (int row = 0; row <= 10; row++) { // How many rows of stars
		for (int star = 10; star > row; star--) { // Subtracting -1 stars to each row
			cout << "*"; // Print out the row
		}
		cout << endl; // Move to the next row
	}

	cout << "\n(vi)\n";
	for (int row = 0; row <= 20; row++) {
		for (int star = 20; star > row; star--) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}