/*
 * Class: CMSC 140 CRN 21090
 * Instructor: Madhvi Shah
 * Project 3
 * Description: Write a program that calculates the occupancy rate
   and the total hotel income for one night and displays this
   information as well as some other information described below.
 * Due Date: 10/30/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Full Name here: Andrea Kristine Almeda

   Pseudocode: 
1.	START
2.	Display “Enter the location of this hotel chain: “
3.	Read hotelChain
4.	Display “Enter total number of floors of the hotel: “
5.	Read floors
6.	floors > 0 && floors <= 5?
a.	False
i.	Display “Number of of floors should be between 1 and 5!! Please try again.
ii.	Display “Enter total number of floors of the hotel: “
iii.	Repeat steps 4 and 5
7.	Display “Enter total number of rooms in the __th floor: “
8.	Read rooms
9.	rooms > 0 && rooms <= 30?
a.	False
i.	Display “Number of rooms should be between 1 and 30!! Please try again.
ii.	Display “Enter total number of rooms in the __th floor: “
iii.	Repeat steps 7 and 8
10.	Display message “How mant SINGLE rooms are occupied in the __th floor: “
11.	Read singleRooms
12.	Display “How many DOUBLE rooms are occupied in the __th floor: “
13.	Read doubleRooms
14.	Display “How KING rooms are occupied in the __th floor: “
15.	Read kingRooms
16.	Display “How many SUITES are occupied in the __th floor: “
17.	Read suite
18.	Increment floors
19.	Repeat steps 6-17 until number of floors of the hotel is satisfied.
20.	singleTotal = singleRooms + SINGLE_RATE
21.	doubleTotal = doubleRooms + DOUBLE_RATE
22.	kingTotal = kingRooms + KING_RATE
23.	suiteTotal = suite + SUITE_RATE
24.	hotelIncome = singleTotal + doubleTotal + kingTotal + suiteTotal
25.	totalRooms = occupied + unoccupied
26.	totalOccupied = totalRooms - occupied
27.	totalUnoccupied = totalRooms - occupied
28.	occupancyRate = (totalOccupied / totalRooms) * 100
29.	Display calculations above
a.	Hotel Income
b.	Total Rooms
c.	Total Occupied Rooms
d.	Total Unoccupied Rooms
e.	Occupancy Rate (2 decimals)
30.	Find which floor has least number of rooms
31.	Display which floors has the least number of rooms
32.	occupanyRate < 60?
a.	True
i.	Display “Need to improve occupancy rate!!”
33.	Display “Thank you for testing my program!!”
34.	Display “PROGRAMMER: Andrea Almeda”
35.	Display “CMSC 140 Common Project 3”
36.	Display “Due Date: October 30, 2022”
37.	STOP
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	// Declare variables
	string location;

	int floors, numFloors, numRooms, numSingleRooms,
		numDoubleRooms, numKingRooms, numSuites,
		totalRooms, totalSingle, totalDouble,
		totalKing, totalSuite, totalOccupied,
		totalUnoccupied, leastFloor, leastRooms;

	double hotelIncome, occupancyRate;

	// Declare constant variables
	const double SINGLE_RATE = 60;
	const double DOUBLE_RATE = 75;
	const double KING_RATE = 100;
	const double SUITE_RATE = 150;
	const double MAX_FLOORS = 5;
	const double MIN_FLOORS = 0;
	const double MAX_ROOMS = 30;
	const double MIN_ROOMS = 0;

	// Initialize accumulators to 0
	numFloors = numRooms = numSingleRooms = 
	numDoubleRooms = numKingRooms = numSuites = 
	totalRooms = totalSingle = totalDouble = 
	totalKing = totalSuite = leastFloor = leastRooms = 0;

	// Header of program
	cout << "=======================================================================================================================" << endl;
	cout << setw(64) << "BlueMont Hotel" << endl;
	cout << "=======================================================================================================================" << endl;

	// Prompt user to enter location of the hotel chain
	cout << "\n\nEnter the location of this hotel chain: ";
	getline(cin, location);
	
	// Ask user to enter the total number of floors in the hotel
	cout << "\nEnter total number of floors of the hotel: ";
	cin >> numFloors;

	// Validate user input
	while (numFloors <= MIN_FLOORS || numFloors > MAX_FLOORS) {
		cout << "\nNumber of floors should be between 1 and 5! Please try again." << endl;
		cout << "Enter total number of floors of the hotel: ";
		cin >> numFloors;
	}

	// If input is valid, prompt user to enter amounnt of rooms and types of rooms for each floor
	if (numFloors > MIN_FLOORS || numFloors <= MAX_FLOORS) {
		for (floors = 1; floors <= numFloors; floors++) {

			// Ask user to input total number of rooms for each floor
			cout << "\nEnter total number of rooms in the " << floors << "th floor: ";
			cin >> numRooms;

			// If the number of rooms exceeds the limit, ask user to input valid integer
			while (numRooms <= MIN_ROOMS || numRooms > MAX_ROOMS) {
				cout << "\nNumber of rooms should be between 1 and 30! Please try again." << endl;
				cout << "Enter total number of rooms in the " << floors << "th floor: ";
				cin >> numRooms;
			}
			
			// Ask user to input number of occupied rooms for each type of room
			cout << "How many SINGLE rooms are occupied in the " << floors << "th floor: ";
			cin >> numSingleRooms;
			cout << "How many DOUBLE rooms are occupied in the " << floors << "th floor: ";
			cin >> numDoubleRooms;
			cout << "How many KING rooms are occupied in the " << floors << "th floor: ";
			cin >> numKingRooms;
			cout << "How many SUITE rooms are occupied in the " << floors << "th floor: ";
			cin >> numSuites;

			// If the total number of occupied rooms exceeds the total number of rooms on the floor, ask user to try again
			while ((numSingleRooms + numDoubleRooms + numKingRooms + numSuites) > numRooms) {
				cout << "\nTotal number of occupied rooms exceeds the total number of rooms on this floor! Please try again." << endl;
				cout << "How many SINGLE rooms are occupied in the " << floors << "th floor: ";
				cin >> numSingleRooms;
				cout << "How many DOUBLE rooms are occupied in the " << floors << "th floor: ";
				cin >> numDoubleRooms;
				cout << "How many KING rooms are occupied in the " << floors << "th floor: ";
				cin >> numKingRooms;
				cout << "How many SUITE rooms are occupied in the " << floors << "th floor: ";
				cin >> numSuites;
			}

			// Find which floor has least number of rooms
			if (leastFloor == 0 && leastRooms == 0) {
				leastFloor = floors;
				leastRooms = numRooms;
			}
			if (numRooms < leastRooms) {
				leastRooms = numRooms;
				leastFloor = floors;
			}

			// After each loop, accumulate numbers for total rooms and for each type of room
			totalRooms += numRooms;
			totalSingle += numSingleRooms;
			totalDouble += numDoubleRooms;
			totalKing += numKingRooms;
			totalSuite += numSuites;
		}
	}

	// Perform calculations for total occupied and unoccupied rooms
	totalOccupied = totalSingle + totalDouble + totalKing + totalSuite;
	totalUnoccupied = totalRooms - totalOccupied;

	// Perform calculations for room costs and hotel income
	hotelIncome = ((totalSingle * SINGLE_RATE) + (totalDouble * DOUBLE_RATE) + (totalKing * KING_RATE) + (totalSuite * SUITE_RATE));

	// Perform calculation for occupancy rate of the hotel
	occupancyRate = (static_cast<double>(totalOccupied) / totalRooms) * 100;

	// Display room rates
	cout << "\n\n=======================================================================================================================" << endl;
	cout << setw(64) << "BlueMont Hotel located in " << location << endl << endl;
	cout << setw(70) << "TODAY'S ROOM RATES (US$/night)" << endl << endl;
	cout << setw(31) << "Single Room" << setw(20) << "Double Room" << setw(20) << "King Room" << setw(20) << "Suite Room" << endl;
	cout << setw(31) << "$60.00" << setw(20) << "$70.00" << setw(20) << "$100.00" << setw(20) << "$150.00" << endl;
	cout << "=======================================================================================================================" << endl << endl;

	// Display totals
	cout << setw(31) << "Hotel Income: $" << fixed << setprecision(2) << hotelIncome << endl;
	cout << setw(30) << "Total # of Rooms: " << totalRooms << endl;
	cout << setw(30) << "Total # of Occupied Rooms: " << totalOccupied << endl;
	cout << setw(30) << "Total # of UnOccupied Rooms: " << totalUnoccupied << endl;
	cout << setw(30) << "Occupancy Rate: " << occupancyRate << "%" << endl << endl;
	
	// Display which floor has the least number of rooms
	cout << leastFloor << "th floor with " << leastRooms << " rooms has the least number of rooms." << endl;

	// Check if occupancy rate is less than 60%
	if (occupancyRate < 60) {
		cout << "\nNeed to improve hotel occupancy rate!" << endl;
	}

	// End credits
	cout << "\nThank you for testing my program!" << endl;
	cout << "PROGRAMMER: Andrea Almeda" << endl;
	cout << "CMSC 140 Common Project 3" << endl;
	cout << "DUE DATE: October 30, 2022" << endl;

	return 0;
}