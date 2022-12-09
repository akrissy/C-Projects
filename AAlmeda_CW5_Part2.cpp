/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Professor Madhvi Shah
 * Programming Classwork 5 Part 2
 * Computer/Platform/Compiler: Windows 10 Visual Studio 2022
 * Description: Writing data to a .txt file
 * Due Date: 10/23/2022
 * I pledge that I have completed the programming assignment independently.
 I have not copied the code from a student or any source.
 I have not given my code to any student.
 Print your name here: Andrea Almeda
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

	ofstream outputFile;
	string name, phoneNumber, streetAddress, city, state, zipCode;

	outputFile.open("list.txt");

	cout << "Enter your name" << endl;
	cout << "Name: ";
	getline(cin, name);

	cout << "\nEnter your phone number" << endl;
	cout << "Phone Number: ";
	getline(cin, phoneNumber);

	cout << "\nEnter your street address" << endl;
	cout << "Street Address: ";
	getline(cin, streetAddress);

	cout << "\nEnter your city" << endl;
	cout << "City: ";
	getline(cin, city);

	cout << "\nEnter your state" << endl;
	cout << "State: ";
	getline(cin, state);

	cout << "\nEnter your zip code" << endl;
	cout << "Zip Code: ";
	getline(cin, zipCode);

	outputFile << "Name: " << name << endl;
	outputFile << "Phone Number: " << phoneNumber << endl;
	outputFile << "Address: " << streetAddress << endl << "\t " << city << ", " << state << " " << zipCode << endl;

	cout << "\nYour information was saved in .txt file named list.txt" << endl;

	outputFile.close();

	return 0;

}