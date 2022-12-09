/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Madhvi Shah
 * Classwork 6 Part 2
 * Description: Write a program working as a soda vending machine.
 * Due Date: 11/13/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Andrea Kristine Almeda
*/

#include <iostream>
using namespace std;

// Function prototypes.
void showMenu(int& selection);
void takePurchase(double& price, double& amount, double& total);
void takePayment(double& payment);
void displayInfo(double& payment, double& total);

int main() {

	// Variables to hold user selection, amount, payment, and total.
	int choice;
	double quantity = 0,
		pay = 0,
		totalPrice = 0;

	// Constant variables for price of each menu item.
	double COKE = 1.25,
		PEPSI = 1.00,
		WATER = 2.00,
		COFFEE = 1.50;

	// Display menu and get user choice.
	showMenu(choice);

	// Validate user input.
	while (choice < 1 || choice > 5) {
		cout << "Please select a choice on the menu from 1-5: ";
		cin >> choice;
	}

	// Depending on user choice, call functions for appropriate menu item.
	if (choice == 1) {
		takePurchase(COKE, quantity, totalPrice);
		takePayment(pay);
		displayInfo(pay, totalPrice);
	}
	else if (choice == 2) {
		takePurchase(PEPSI, quantity, totalPrice);
		takePayment(pay);
		displayInfo(pay, totalPrice);
	}
	else if (choice == 3) {
		takePurchase(WATER, quantity, totalPrice);
		takePayment(pay);
		displayInfo(pay, totalPrice);
	}
	else if (choice == 4) {
		takePurchase(COFFEE, quantity, totalPrice);
		takePayment(pay);
		displayInfo(pay, totalPrice);
	}
	else if (choice == 5) {
		cout << "\nYou have quit the menu." << endl; // If user choice is 5, terminate the program.
	}

	return 0;
}

// Function for menu and user selection.
void showMenu(int& selection) {
	cout << "**** Vending Machine ****" << endl << endl;
	cout << "1. Coke  $1.25" << endl;
	cout << "2. Pepsi  $1.00" << endl;
	cout << "3. Water  $2.00" << endl;
	cout << "4. Coffee $1.50" << endl;
	cout << "5. Exit Menu" << endl << endl;

	cout << "Enter your choice: ";
	cin >> selection;
}
// Function to calculate the total price depending on quantity of item.
void takePurchase(double& price, double& amount, double& total) {
	cout << "How many do you want?: ";
	cin >> amount;
	total = price * amount;
}

// Function for user's payment.
void takePayment(double& payment) {
	cout << "How much is your payment?: ";
	cin >> payment;
}

// Function for displaying calculations of tax, total purchase, and change.
void displayInfo(double& payment, double& total) {
	double tax, change, totalPurchase;

	tax = total * 0.06;
	totalPurchase = total + tax;
	change = payment - totalPurchase;

	cout << "\nTax Amount: $" << tax << endl;
	cout << "\nTotal Purchase: $" << totalPurchase << endl;
	cout << "\nChange: $" << change << endl;
}