/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Madhvi Shah
 * Classwork 7
 * Description: Write a program that implements a function named largerThanN
   that accepts three arguments: an array of type int, the size of the array of
   type int and an int number n. The function should display all numbers in the
   array that are greater than the number n.
 * Due Date: 11/27/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Andrea Kristine Almeda
*/

#include <iostream>
using namespace std;

void largerThanN(int array[], int size, int n);

int main() {

	int numbers[10] = { 30, 20, 50, 2, 1, 44, 3, 12, 90, 32 };
	int value;

	cout << "Enter a number: ";
	cin >> value;

	largerThanN(numbers, 10, value);

	return 0;
}

void largerThanN(int array[], int size, int n) {

	cout << "The numbers larger than " << n << " are:";

	for (int count = 0; count < size; count++) {
		if (array[count] > n) {
			cout << " " << array[count];
		}
	}
	cout << endl;
}