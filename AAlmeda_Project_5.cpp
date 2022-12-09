/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Professor Madhvi Shah
 * Project 5
 * Description: Write a program that simulates a magic square using 3 
   one dimensional parallel arrays of integer type. 
 * Due Date: 12/4/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Andrea Kristine Almeda
 * Pseudocode or Algorithm for the program:
1.	START
2.	Create global constants:
	a.	Const int ROWS = 3;
	b.	Const int COLS = 3;
	c.	Const int MIN = 1;
	d.	Const int MAX = 9;
3.	Void fillArray(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
4.	Prompt user to enter 3 numbers for row 1, row 2, row 3
5.	Return arrayrow1[], arrayrow2[], arrayrow3[], int size
6.	Bool checkRange(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size, int MIN, int MAX)
7.	Arrayrow1[], arrayrow2[], arrayrow3[] <= COLS?
	a.	If false, return false
8.	If true:
	a.	Arrayrow1[], arrayrow2[], arrayrow3[] <= ROWS?
	i.	If false, return false
9.	If true:
	a.	Arrayrow1[], arrayrow2[], arrayrow3[] >= MIN && <= MAX
	i.	If false, return false
10.	If true, return true
11.	Bool checkUnique(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
12.	Arrayrow1[], arrayrow2[], arrayrow3[] does not contain any equal numbers?
13.	If false, return false
14.	If true, return true
15.	Bool checkRowSum(int arrayrow1[], int arrayrow2[], int arrayrow3[], int size)
16.	Arrayrow1[], arrayrow2[], arrayrow3 == 15?
17.	If false, return false
18.	If true, return true
19.	Bool checkColSum(int arrayrow1[], int arrayrow2[], intarrayrow3[], int size)
20.	Are columns of arrayrow1[], arrayrow2[], arrayrow3[] == 15?
21.	If false, return false
22.	If true, return true
23.	Bool checkDiagSum(int arrayrow1[]1, int arrayrow2[], int arrayrow3[], int size)
24.	Does first value of arrayrow3[], second value of arrayrow2[], third value of arrayrow1[] == 15?
25.	If false, return false
26.	If true:
	a.	Does first value of arrayrow1[], second value of arrayrow2[], third value of arrayrow3[] == 15?
	b.	If false, return false
	c.	If true, return true
27.	If checkRowSum, checkColSum, checkDiagSum == 15:
	a.	“This is a Lo Shu magic square.”
28.	Else if checkRowSum, checkColSUm, checkDiagSum != 15:
	a.	This is not a Lo Shu magic square.”
29.	Do you want to try again (y/n)?
30.	Enter choice
31.	If choice == y:
	a.	Repeat steps 3-30.
32.	Else if choice == n:
	a.	End program
33.	STOP
*/

#include <iostream>
using namespace std;

// Function Prototypes
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS);
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS, int MIN, int MAX);
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS);
bool checkRowSum(int arrauRow1[], int arrayRow2[], int arrayRow3[], int COLS);
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS);
bool checkDiagSum(int arrayRow1[], int arrauRow2[], int arrayRow2[], int COLS);
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS);
bool isMagicSquare(bool validRange, bool validUnique, bool validRow, bool validCol, bool validDiag);

// Global Constants
const int ROWS = 3; // The number of rows in the array
const int COLS = 3; // The number of columns in the array
const int MIN = 1; // The value of the smallest number
const int MAX = 9; // The value of the largest number

int main() {

	// Variable to hold choice of the user if they would like to repeat the program
	char choice;

	// Array variables
	int magicArrayRow1[COLS], magicArrayRow2[COLS], magicArrayRow3[COLS];

	// Function call to fill arrayRow1[], arrayRow2[], arrayRow3[]
	fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

	// Function call to display the Lo Shu Magic Square
	showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

	// Function calls to display if square is a Lo Shu Magic Square
	bool range = checkRange(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS, MIN, MAX);
	bool unique = checkUnique(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
	bool row = checkRowSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
	bool col = checkColSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
	bool diag = checkDiagSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
	isMagicSquare(range, unique, row, col, diag);

	// Ask user if they would like to try again
	cout << "Do you want to try again (y/n)? ";
	cin >> choice;
	cout << endl;

	// If user enters yes, loop the program
	while (choice == 'y' || choice == 'Y') {

		// Function call to fill arrayRow1[], arrayRow2[], arrayRow3[]
		fillArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

		// Function call to display the Lo Shu Magic Square
		showArray(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);

		// Function calls to display if squarere is a Lo Shu Magic Square
		bool range = checkRange(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS, MIN, MAX);
		bool unique = checkUnique(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		bool row = checkRowSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		bool col = checkColSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		bool diag = checkDiagSum(magicArrayRow1, magicArrayRow2, magicArrayRow3, COLS);
		isMagicSquare(range, unique, row, col, diag);

		// Ask user if they would like to try again
		cout << "Do you want to try again (y/n)? ";
		cin >> choice;
		cout << endl;
	}

	// If no, terminate the program
	if (choice == 'n' || choice == 'N') {
			cout << "You have exited the program." << endl;
			cout << "\nProgrammer: Andrea Almeda";
			cout << "\nCommon Project 5";
			cout << "\nDue Data: 12/4/2022" << endl;
	}

	return 0;
}

// Function to fill arrayRow1[], arrayRow2[], arrayRow3[]
void fillArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS) {

	// Filling arrayRow1[]
	for (int count = 0; count < COLS; count++) {
		cout << "Enter the number for row 1 and column " << (count + 1) << ": ";
		cin >> arrayRow1[count];
	}

	// Filling arrayRow2[]
	for (int count = 0; count < COLS; count++) {
		cout << "Enter the number for row 2 and column " << (count + 1) << ": ";
		cin >> arrayRow2[count];
	}

	// Filling arrayRow3[]
	for (int count = 0; count < COLS; count++) {
		cout << "Enter the number for row 3 and column " << (count + 1) << ": ";
		cin >> arrayRow3[count];
	}

	cout << endl;
}

// Function to check if the elements are lower than MIN and higher than MAX
bool checkRange(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS, int MIN, int MAX) {

	// Check if elements are in range in arrayRow1[]
	for (int count = 0; count < COLS; count++) {
		if (arrayRow1[count] >= MIN || arrayRow1[count] <= MAX) {
			return true;
		}
		else {
			return false;
		}
	}

	// Check if elements are in range in arrayRow2[]
	for (int count = 0; count < COLS; count++) {
		if (arrayRow2[count] >= MIN || arrayRow2[count] <= MAX) {
			return true;
		}
		else {
			return false;
		}
	}

	// Check if elements are in range in arrayRow3[]
	for (int count = 0; count < COLS; count++) {
		if (arrayRow3[count] >= MIN || arrayRow3[count] <= MAX) {
			return true;
		}
		else {
			return false;
		}
	}

	return true;
}

// Function to check if there is no reoccurance of numbers in each row
bool checkUnique(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS) {

	// Array variable that initializes all elements to 0
	int isUnique[10] = { 0 };

	if (checkRange(arrayRow1, arrayRow2, arrayRow3, COLS, MIN, MAX)) {

		// Checking if arrayRow1[] is unique
		for (int count = 0; count < COLS; count++) {
			if (arrayRow1[count] > 0) {
				if (isUnique[arrayRow1[count]] == 0) {
					isUnique[arrayRow1[count]]++;
					return true;
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}

		// Checking if arrayRow2[] is unique
		for (int count = 0; count < COLS; count++) {
			if (arrayRow2[count] > 0) {
				if (isUnique[arrayRow2[count]] == 0) {
					isUnique[arrayRow2[count]]++;
					return true;
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}

		// Checking if arrayRow3[] is unique
		for (int count = 0; count < COLS; count++) {
			if (arrayRow3[count] > 0) {
				if (isUnique[arrayRow3[count]] == 0) {
					isUnique[arrayRow3[count]]++;
					return true;
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
	}
	else {
		return false;
	}

	return true;
}

// Function to check if the sum of rows adds to 15
bool checkRowSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS) {
	
	// Variables to hold each row sum
	int arrayRow1_sum = 0;
	int arrayRow2_sum = 0;
	int arrayRow3_sum = 0;

	// Check if arrayRow1[] sum is 15
	for (int count = 0; count < COLS; count++) {
		arrayRow1_sum += arrayRow1[count];
	}
	if (arrayRow1_sum == 15) {
		return true;
	}
	else {
		return false;
	}

	// Check if arrayRow2[] sum is 15
	for (int count = 0; count < COLS; count++) {
		arrayRow2_sum += arrayRow2[count];
	}
	if (arrayRow2_sum == 15) {
		return true;
	}
	else {
		return false;
	}

	// Check if arrayRow3[] sum is 15
	for (int count = 0; count < COLS; count++) {
		arrayRow3_sum += arrayRow3[count];
	}
	if (arrayRow3_sum == 15) {
		return true;
	}
	else {
		return false;
	}

	return true;
}

// Function to check if the sum of columns is 15
bool checkColSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS) {

	// Array variable to initialize each column sum to 0 every time it loops through each column
	int colSum[3] = { 0 };

	// Sum of each column
	for (int count = 0; count < COLS; count++) {
		colSum[count] += arrayRow1[count] + arrayRow2[count] + arrayRow3[count];
	}

	// Check if each column sum is 15
	for (int count = 0; count < COLS; count++) {
		if (colSum[count] == 15) {
			return true;
		}
		else {
			return false;
		}
	}

	return true;
}

// Function to check if each diagonal sum is 15
bool checkDiagSum(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS) {

	// Variables to hold left diagonal sum and right diagonal sum
	int leftDiagSum = 0;
	int rightDiagSum = 0;

	// Check if left diagonal sum is 15
	leftDiagSum += arrayRow1[0] + arrayRow2[1] + arrayRow3[2];
	if (leftDiagSum == 15) {
		return true;
	}
	else {
		return false;
	}

	// Check if right diagonal sum is 15
	rightDiagSum += arrayRow1[2] + arrayRow2[1] + arrayRow3[0];
	if (leftDiagSum == 15) {
		return true;
	}
	else {
		return false;
	}

	return true;
}

// Function to display each row elements
void showArray(int arrayRow1[], int arrayRow2[], int arrayRow3[], int COLS) {

	// Display arrayRow1[]
	for (int count = 0; count < COLS; count++) {
		cout << arrayRow1[count] << " ";
	}
	cout << endl;

	// Display arrayRow2[]
	for (int count = 0; count < COLS; count++) {
		cout << arrayRow2[count] << " ";
	}
	cout << endl;

	// Display arrayRow3[]
	for (int count = 0; count < COLS; count++) {
		cout << arrayRow3[count] << " ";
	}
	cout << endl;
}

// Function to validate if the square is a Lo Shu Magic Square
bool isMagicSquare(bool range, bool unique, bool row, bool col, bool diag) {

	if (range && unique && row && col && diag) {
		cout << "\nThis is a Lo Shu Magic Square.\n\n";
		return true;
	}
	else {
		cout << "\nThis is not a Lo Shu Magic Square.\n\n";
		return false;
	}
}
