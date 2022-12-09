/*
 * Class: CMSC 140 CRN 20433
 * Instructor: Professor Madhvi Shah
 * Programming Classwork 4 Part 1
 * Computer/Platform/Compiler: Windows 10 Visual Studio 2022
 * Description: Calculates total cost of tickets sold
 * Due Date: 10/09/2022
 * I pledge that I have completed the programming assignment independently.
 I have not copied the code from a student or any source.
 I have not given my code to any student.
 Print your name here: Andrea Almeda
*/

#include <iostream>
using namespace std;

int main()
{
	// Constant variables for discounts
	const double THREE_FOUR_DAYS = 0.10,
		FIVE_SIX_DAYS = 0.25,
		SEVEN_NINE_DAYS = 0.33,
		TEN_PLUS_DAYS = 0.42;

	// Constant variable for tickets per day
	const double TICKET_PRICE = 109.0;

	// User input
	int days;

	// Total price for the amount of days
	double total_price;

	// Discount amount
	double discount_amount;

	// Output answer
	double total_cost;

	cout << "How many days of tickets were sold? ";
	cin >> days;

	// Determine the total cost after discount has been applied
	if (days > 0) {
		if (days <= 4) {
			total_price = days * TICKET_PRICE;
			discount_amount = total_price * THREE_FOUR_DAYS;
			total_cost = total_price - discount_amount;
		}
		else if (days <= 6 && days >= 5) {
			total_price = days * TICKET_PRICE;
			discount_amount = total_price * FIVE_SIX_DAYS;
			total_cost = total_price - discount_amount;
		}
		else if (days <= 9 && days >= 7) {
			total_price = days * TICKET_PRICE;
			discount_amount = total_price * SEVEN_NINE_DAYS;
			total_cost = total_price - discount_amount;
		}
		else if (days >= 10) {
			total_price = days * TICKET_PRICE;
			discount_amount = total_price * TEN_PLUS_DAYS;
			total_cost = total_price - discount_amount;
		}
		cout << "The total cost of the purchase is $" << total_cost << endl;
	}
	else
		cout << "Tickets sold must be greater than zero." << endl;

	return 0;
}
