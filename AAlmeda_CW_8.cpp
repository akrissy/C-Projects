/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Professor Madhvi Shah
 * Programming Classwork 8
 * Description: Develop a program to read as many test scores as the user
   wants from the keyboard (assuming at most 50 scores).
 * Due Date: 12/4/22
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Andrea Almeda
*/

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
void displayArray(int array[], int size);
void selectionSort(int array[], int size);
int findMax(int array[], int size);
int findMin(int array[], int size);
double findAvg(int array[], int size);
void swap(int& a, int& b);

int main() {

	// Variables
	const int MAX = 50;
	int numScores;
	int scores[MAX];
	int highest, lowest;
	double avg;
	
	// Prompt user to enter the number of scores
	cout << "How many scores do you want to enter? ";
	cin >> numScores;
	cout << endl;

	// User input for each score
	for (int count = 0; count < numScores; count++) {
		cout << "Enter score #" << (count + 1) << ": ";
		cin >> scores[count];
	}

	// Function calls to display the original order of scores and descending order of scores
	displayArray(scores, numScores);
	selectionSort(scores, numScores);

	// Set highest, lowest, and avg equal to appopriate function calls
	highest = findMax(scores, numScores);
	lowest = findMin(scores, numScores);
	avg = findAvg(scores, numScores);

	// Display the highest score, lowest score, and the average of scores
	cout << "\nHighest score: " << highest << endl;
	cout << "Lowest score: " << lowest << endl;
	cout << fixed << setprecision(1) << "Average of scores: " << avg << endl;

	return 0;
}

// Function to display original order of scores
void displayArray(int array[], int size) {

	cout << "\nThe original order of scores are: ";

	for (int count = 0; count < size; count++) {
		cout << array[count] << " ";
	}

}

// Function to display scores sorted in descending order
void selectionSort(int array[], int size) {

	cout << "\nScores ordered high to low: ";

	int maxIndex, maxValue, index;

	for (int start = 0; start < (size - 1); start++) {
		maxIndex = start;
		maxValue = array[start];
		for (index = start + 1; index < size; index++) {
			if (array[index] > maxValue) {
				maxValue = array[index];
				maxIndex = index;
			}
		}
		swap(array[maxIndex], array[start]);
	}

	for (int index = 0; index < size; index++) {
		cout << array[index] << " ";
	}
}

// Swap function that swaps ints a and b in memory
void swap(int& a, int& b) {
	
	int temp = a;
	a = b;
	b = temp;
}

// Function that finds the highest score
int findMax(int array[], int size) {
	
	int max = array[0];

	for (int count = 1; count < size; count++) {
		if (array[count] > max) {
			max = array[count];
		}
	}

	return max;
}

// Function that finds the lowest score
int findMin(int array[], int size) {

	int min = array[0];

	for (int count = 1; count < size; count++) {
		if (array[count] < min) {
			min = array[count];
		}
	}

	return min;
}

// Function that calculates the average of scores
double findAvg(int array[], int size) {

	double average = 0;
	
	for (int count = 0; count < size; count++) {
		average += array[count];
	}

	return average / size;
}