/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Professor Shah
 * Project 1
 * Description: This program calculates the user’s inputted age into months, days, minutes, seconds, dog years, and goldfish years. Program also shows an example of basic operators used.
 * Due Date: 09/25/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Andrea Almeda
 * Pseudocode or Algorithm for the program:
	(be sure to indent items with control structure)
	(need to match flow chart submitted in documentation)

1.	Display message “Hello, welcome to Montgomery College! My name is robot_name. May I have your name?”
2.	Read visitor_name
3.	Display message “Nice to have you with us today, visitor_name!
    Let me impress you with a small game.
    Give me the age of an important person or a pet to you.
    Please give me only a number:”
4.	Read age
5.	Calculate age into amount of months, days, hours, minutes, and seconds for a person. Calculate age for amount of dog years in human years and amount of goldfish years to human years.
6.	Display message “You have entered age.
    If this is for a person, the age can be expressed as:
    _ years
    or  _ months
    or about _ days
    or about _ hours
    or about _ minutes
    or about _ seconds.
    If this is for a dog, it is _  years old in human age.
    If this is for a goldfish, it is _ years old in human age.”
7.	Display message “Let’s play another game, visitor_name. Give me a whole number.”
8.	Read whole_number1
9.	Display message “Very well. Give me another whole number.”
10.	Read whole_number2
11.	Add whole_number1 and whole_number2 to get the sum. Divide whole_number1 and whole_number2. Change whole_number1 into double data type using static_cast and divide whole_number1 and whole_number2 to get a decimal number.
12.	Display message “Using the operator '+' in C++, the result of whole_number1 + whole_number2 is __.
    Using the operator '/', the result of whole_number1 / whole_number2 is __.
    However, the result of whole_number1 / whole_number2 is about __.”
13.	Display message “Thank you for testing my program!
    PROGRAMMER: Andrea Almeda
    CMSC140 Common Project 1
    Due Date: 09/25/2002"
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	// end of project credits
	const string PROGRAMMER_NAME = "Andrea Almeda";
	const int ASSIGNMENT_NUMBER = 1;
	const string DUE_DATE = "09/25/2022";

	// robot name
	string robot_name = "Nao";

	// user input
	string visitor_name;
	int age, whole_number1, whole_number2;

	// constant variables for calculations
	const int DAYS_OF_MONTH = 30;
	const int ONE_HUMAN_YEAR = 1;
	const int ONE_GOLDFISH_YEAR = 5;
	const int ONE_DOG_YEAR = 7;
	const int HOURS = 24;
	const int MINUTES = 60;
	const int SECONDS = 60;

	// output calculations
	int months, days, hours, minutes;
	unsigned int seconds;
	double dog_age, goldfish_age;
	int addition;
	double division;
	double decimal;

	cout << "Hello, welcome to Montgomery College! My name is " << robot_name << ". May I have your name?" << endl;
	getline(cin, visitor_name);
	
	cout << "Nice to have you with us today, " << visitor_name << "!" << endl;
	cout << "Let me impress you with a small game." << endl;
	cout << "Give me the age of an important person or pet to you." << endl;
	cout << "Please give me only a number:" << endl;
	cin >> age;

	months = age * 12; // calculating amount of months in age
	days = age * 12 * DAYS_OF_MONTH; // calculating amount of days in age
	hours = age * 12 * DAYS_OF_MONTH * HOURS; // calculating amount of hours in age
	minutes = age * 12 * DAYS_OF_MONTH * HOURS * MINUTES; // calculating amount of minutes in age
	seconds = age * 12 * DAYS_OF_MONTH * HOURS * MINUTES * SECONDS; // calculating amount of seconds in age
	dog_age = age * ONE_DOG_YEAR; // calculating amount of dog years in age
	goldfish_age = age * ONE_GOLDFISH_YEAR; // calculating amount of goldfish years in age
	
	cout << "\nYou have entered " << age << "." << endl;
	cout << "If this is for a person, the age can be expressed as:" << endl;
	cout << age << " years" << endl;
	cout << "or " << months << " months" << endl;
	cout << "or about " << days << " days" << endl;
	cout << "or about " << hours << " hours" << endl;
	cout << "or about " << minutes << " minutes" << endl;
	cout << "or about " << seconds << " seconds" << endl;
	cout << "If this is for a dog, it is " << dog_age << " years old in human age." << endl;
	cout << "If this is for a gold fish, it is " << goldfish_age << " years old in human age." << endl << endl;

	cout << "Let's play another game, " << visitor_name << ". Give me a whole number." << endl;
	cin >> whole_number1;
	cout << "Very well. Give me another whole number." << endl;
	cin >> whole_number2;

	addition = whole_number1 + whole_number2; // calculating the sum of both whole numbers
	division = whole_number1 / whole_number2;// dividing both whole numbers
	decimal = static_cast<double>(whole_number1) / whole_number2; // converting division answer into double data type using type casting

	cout << "Using the operator '+' in C++, the result of " << whole_number1 << " + " << whole_number2 << " is " << addition << "." << endl;
	cout << "Using the operator '/', the result of " << whole_number1 << " / " << whole_number2 << " is " << division<< "." << endl;
	cout << "However, the result of " << whole_number1 << ".0 / " << whole_number2 << ".0 is about " << decimal << "." << endl << endl;

	cout << "Thank you for testing my program!" << endl;
	cout << "PROGRAMMER: " << PROGRAMMER_NAME << endl;
	cout << "CMSC 140 Common Project " << ASSIGNMENT_NUMBER << endl;
	cout << "Due Date: " << DUE_DATE << endl;
	
		return 0;
}
