/*
 * Class: CMSC140 CRN 21090
 * Instructor: Professor Shah
 * Classwork 3
 * Computer/Platform/Compiler: Windows 10 Visual Studio 2022
 * Description: Calculates final score and average score
 * Due Date: 09/25/2022
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: Andrea Almeda
*/


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	string student_name;
	double syllabus_quiz_score,
		chapter_1_quiz_score,
		chapter_2_quiz_score,
		programming_classwork1_score,
		programming_classwork2_score,
		final_score,
		average_score;

	cout << "Enter the student's name: ";
	getline(cin, student_name);

	cout << "Enter Syllabus Quiz Score ranging from 0 to 100: ";
	cin >> syllabus_quiz_score;

	cout << "Enter Chapter 1 Quiz Score ranging from 0 to 100: ";
	cin >> chapter_1_quiz_score;

	cout << "Enter Chapter 2 Quiz Score ranging from 0 to 100: ";
	cin >> chapter_2_quiz_score;

	cout << "Enter Programming Classwork 1 Score ranging from 0 to 100: ";
	cin >> programming_classwork1_score;

	cout << "Enter Programming Classwork 2 Score ranging from 0 to 100: ";
	cin >> programming_classwork2_score;

	final_score = syllabus_quiz_score + chapter_1_quiz_score + chapter_2_quiz_score + programming_classwork1_score + programming_classwork2_score;
	average_score = (syllabus_quiz_score + chapter_1_quiz_score + chapter_2_quiz_score + programming_classwork1_score + programming_classwork2_score) / 5;

	cout << student_name << ": " << "Final score: " << final_score << " " << "Average score: " << average_score << endl;

	return 0;
}
