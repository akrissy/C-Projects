/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Madhvi Shah
 * Classwork 6 Part 1
 * Description: Write a program that allows the user to choose addition
   or subtraction operations on two numbers entered from the keyboard.
 * Due Date: 11/06/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Andrea Kristine Almeda
*/

#include <iostream>
using namespace std;

// Function prototypes. Using ampersands to modify variables in main.
void getChoice(int& selection);
void getInput(int& a, int& b);
void additionCalculation(int& a, int& b, int& c);
void subtractionCalculation(int& a, int& b, int& c);

int main() {

	// Declare variables.
	int choice;
	int num1 = 0, num2 = 0;
	int sum = 0;

	// Prompt user to enter choice for either addition or subtraction.
	getChoice(choice);

	// Validata user input. If incorrect input, loop until user enters valid input.
	while (choice != 1 && choice != 2) {
		cout << "\nPlease input either 1 for addition or 2 for subtraction: ";
		cin >> choice;
	}

	// From user's choice, call the correct function for the calculation of choice.
	if (choice == 1) {
		getInput(num1, num2);
		additionCalculation(num1, num2, sum);
	}
	else if (choice == 2) {
		getInput(num1, num2);
		subtractionCalculation(num1, num2, sum);
	}

	return 0;
}

// Function for user choice.
void getChoice(int& selection) {
	int selection;

	cout << "Enter your choice, 1 for addition 2 for subtraction: ";
	cin >> selection;
}

// Function for user input.
void getInput(int& a, int& b) {
	cout << "\nPlease enter the first number: ";
	cin >> a;
	cout << "Please enter the second number: ";
	cin >> b;
}

// Function for addition.
void additionCalculation(int& a, int& b, int& c) {
	c = a + b;
	cout << "\nThe result is " << c << endl;
}

// Function for subtraction.
void subtractionCalculation(int& a, int& b, int& c) {
	c = a - b;
	cout << "\nThe result is " << c << endl;
}



