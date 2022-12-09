/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Professor Madvi Shah
 * Project 2
 * Description: The program displays a menu for the user and asks the user to make a selection to make a conversion to either fahrenheit, miles, or pounds.
 * Due Date: 10/09/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Andrea Kristine Almeda
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	// User input
	string countryName;
	int choice;
	double celsius,
		kilometer,
		kilograms;

	// Constant variables
	const double ONE_MILE = 0.6;
	const double ONE_POUND = 2.2;

	// Possible outputs
	double fahrenheit,
		miles,
		pounds;

	// Ask the user to enter a country name
	cout << "Enter a country name: ";
	getline(cin, countryName);

	// Display menu and ask user to make a selection
	cout << "\n\tConverter Tookit" << endl;
	cout << "   --------------------------";
	cout << "\n1.Temperature Converter\n2. Distance Converter\n3. Weight Converter\n4. Quit" << endl;
	cout << "\nEnter your choice (1-4): ";
	cin >> choice;
	
	// Choose amount of numbers past decimal point numbers
	cout << fixed << setprecision(2);

	// Test the input if it is true or false
	if ((choice >= 1 && choice <= 4)) {
		if (choice == 1) {
			cout << "Please enter temperature in Celsius (such as 24): ";
			cin >> celsius;
			fahrenheit = (9 / 5) * celsius + 32;
			cout << "It is " << fahrenheit << " degrees in Fahrenheit.\n" << endl;
			cout << countryName << " sounds fun!\n";
			cout << "\nThank you for testing my program!!!\nPROGRAMMER: Andrea Almeda\nCMSC 140 Common Project 2\nDue Date: 10/9/22" << endl;
		}
		else if (choice == 2) {
			cout << "Please enter distance in kilometers (such as 18.54): ";
			cin >> kilometer;
			if (kilometer >= 0) {
				miles = ONE_MILE * kilometer;
				cout << "It is " << miles << " miles.\n" << endl;
				cout << countryName << " sounds fun!\n";
				cout << "\nThank you for testing my program!!!\nPROGRAMMER: Andrea Almeda\nCMSC 140 Common Project 2\nDue Date: 10/9/22" << endl;
			}
			else if (kilometer < 0) {
				cout << "\n!!! Program does not convert negative distance !!!\n";
				cout << "\nThank you for testing my program!!!\nPROGRAMMER: Andrea Almeda\nCMSC 140 Common Project 2\nDue Date: 10/9/22" << endl;
			}
		}
		else if (choice == 3) {
			cout << "Please enter weight in kilograms: ";
			cin >> kilograms;
			if (kilograms >= 0) {
				pounds = ONE_POUND * kilograms;
				cout << "It is " << pounds << " pounds.\n" << endl;
				cout << countryName << " sounds fun! \n";
				cout << "\nThank you for testing my program!!!\nPROGRAMMER: Andrea Almeda\nCMSC 140 Common Project 2\nDue Date: 10/9/22" << endl;
			}
			else if (kilograms < 0) {
				cout << "\n!!! Program does not convert negative weight !!!\n";
				cout << "\nThank you for testing my program!!!\nPROGRAMMER: Andrea Almeda\nCMSC 140 Common Project 2\nDue Date: 10/9/22" << endl;
			}
		}
		else if (choice == 4) {
			cout << "\nYou have quit the program." << endl;
			cout << "\nThank you for testing my program!!!\nPROGRAMMER: Andrea Almeda\nCMSC 140 Common Project 2\nDue Date: 10/9/22" << endl;
		}
	}
	else
		cout << "\nInvalid input. Please restart the program and select one of the choices from 1-4.\n\nThank you for testing my program!!!\nPROGRAMMER: Andrea Almeda\nCMSC 140 Common Project 2\nDue Date : 10/9/22" << endl;

	return 0;
}
