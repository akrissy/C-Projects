/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Madhvi Shah
 * Project 4
 * Description: Write a program that calculates the average number of days
   a company's employees were absent during the year and outputs a report
   on a file named "employeeAbsences.txt".
 * Due Date: 11/13/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Andrea Kristine Almeda

 * Pseudocode:
 1.	START
 2.	“Calculate the average number of days a company’s employees are absent.”
 3.	Create global variable ofstream outFile
 4.	Open outFile and name the file employeeAbsence.txt
 5.	Create function int numOfEmployees
 6.	Ask user for the number of employees
 7.	Save numEmployees
 8.	Return (numEmployees)
 9.	Create function int totDaysAbsent (int numEmployees, int totMissedDays)
 10.	Ask for employee ID
 11.	Ask for missedDays
 12.	Write each employee ID and number of days missed to employeeAbsence.txt
 13.	Keep running total for missedDays for totMissedDays
 14.	Increment numEmployees
 15.	Repeat steps 10 – 14 until numEmployees have been satisfied
 16.	Save numEmployees, totalMissedDays
 17.	Return numEmployees, totMissedDays
 18.	Create function double averageAbsent (int numEmployees, int totMissedDays)
 19.	Calculate average number of days absent
 20.	Save averageDays
 21.	Return averageDays
 22.	Write total amount of days absent and average number of days absent in employeeAbscence.txt
 23.	Close outFile
 24.	STOP
 */

#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

// Global variable for the output file.
ofstream outfile;

// Function prototypes.
int numOfEmployees();
int totDaysAbsent(int employeeCount);
double averageAbsent(double employeeCount, double totMissedDays);

int main() {

	// Open the output file.
	outfile.open("employeeAbsences.txt");

	// Variales that hold the employee count and total days absent.
	int employeeCount = numOfEmployees();
	int totMissedDays = totDaysAbsent(employeeCount);

	// Display the total missed days and average missed days in the output file.
	outfile << "\nThe " << employeeCount << " employees were absent a total of " << totMissedDays << " days.";
	outfile << "\nThe average number of days absent is " << fixed << setprecision(1) << averageAbsent(employeeCount, totMissedDays) <<" days.";
	outfile << "\n\nProgrammer: Andrea Kristine Almeda";

	// Close the output file.
	outfile.close();

	return 0;
}

// Function header for the number of employees in the company.
int numOfEmployees() {

	// Variable to hold the number of employees.
	int numEmployees;

	// Prompt user to enter the number of employees in the company.
	cout << "Please enter the number of employees in the company: ";
	cin >> numEmployees;

	// Input validation for the number of employees.
	while (numEmployees < 1) {
		cout << "The number of employees must not be less than 1.\n";
		cout << "Please re-enter the number of employees in the company: ";
		cin >> numEmployees;
	}

	// Return the number of employees.
	return numEmployees;
}

// Function header for total days absent.
int totDaysAbsent(int employeeCount) {

	// Top header, employee ID, and days absent headers.
	outfile << "EMPLOYEE ABSENCE REPORT\n\n";
	outfile << "Employee ID" << setw(15) << "Days Absent\n";

	// Accumulator for total days absent.
	int totAbsent = 0;

	// Loop to input each employee ID and the number of days absent.
	for (int count = 1; count <= employeeCount; count++) {
		
		// Variables to hold employee ID and days absent.
		int employeeID;
		int days;

		// Prompt user to enter an employee ID.
		cout << "Please enter an employee ID: ";
		cin >> employeeID;

		// Prompt user to enter the number of days absent for the employee.
		cout << "Please enter the number of days this employee missed during the year: ";
		cin >> days;

		// Input validation for the number of days absent.
		while (days < 0) {
			cout << "The number of days absent must not be negative.\n";
			cout << "Please re-enter the number of days absent this employee missed during the year: ";
			cin >> days;
		}

		// Write each employee ID and absences in the output file after each loop.
		outfile << employeeID << setw(11) << days << endl;
		
		// Accumualate the total days absent after each loop.
		totAbsent += days;
	}

	cout << "\nProgrammer: Andrea Kristine Almeda" << endl;

	// Return the accumulated days absent.
	return totAbsent;
}

// Function header for the average days absent.
double averageAbsent(double employeeCount, double totMissedDays) {

	// Variable to hold the average missed days.
	double averageMissed;

	// Calculate the average missed days.
	averageMissed = static_cast<double>(totMissedDays) / employeeCount;

	// Return the average missed days.
	return averageMissed;
}