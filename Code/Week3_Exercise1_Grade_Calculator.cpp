/*
* PIC10A 1A, Spring 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Grade Calculator ver.1
*
* Write a program that will calculate
* a student's final score in some class
* on the following dual grading system:
* [Scheme A] Midterm 30%, Final 40%, HW 30%
* [Scheme B] Midterm dropped, Final 70%, HW 30%
*
* Assume that there will be 3 HW assignments total,
* and the lowest HW score will be dropped
*
* The maximum of two scores from two schemes will be the final score
*
* In addition to printing the final score,
* you should also determine the letter grade
* based on the following scale:
*	 90 <= A <= 100
*	 80 <= B < 90
*	 70 <= C < 80
*	 60 <= D < 70
*	 0  <= F < 60
*/

#include <iostream>

using namespace std;

int main() {
	// I provide here the input and output format for you to save time
	
	// use descriptive names, and initialize them
	double mid = 0., fin = 0., hw1 = 0., hw2 = 0., hw3 = 0.; 
	
	// get user inputs
	cout << "Please enter the midterm score (0 - 100): ";
	cin >> mid;
	cout << "Please enter the final exam score (0 - 100): ";
	cin >> fin;
	cout << "Please enter the homework 1 score (0 - 100): ";
	cin >> hw1;
	cout << "Please enter the homework 2 score (0 - 100): ";
	cin >> hw2;
	cout << "Please enter the homework 3 score (0 - 100): ";
	cin >> hw3;

	// do some calculation here

	// 1. find the lowest hw score
	double lowest_hw_score = hw1; // initialize with hw1
	if (hw2 < lowest_hw_score) { // compare with hw2
		lowest_hw_score = hw2;	 // now lowest of {hw1, hw2}
	}
	if (hw3 < lowest_hw_score) { // compare with hw3
		lowest_hw_score = hw3; // now lowest of {hw1, hw2, hw3}
	}
	// now we compute the overall hw score: add two largests, and take the average
	int number_of_hw = 2; // define a variable to avoid "magic numbers"
	double avg_hw_score = (hw1 + hw2 + hw3 - lowest_hw_score)/number_of_hw; // take the average hw score

	// This part will be continued on Thursday!
	
	// print out the final scores from two schemes
	cout << "Your final score based on Scheme A is ";
	cout << "Your final score based on Scheme B is ";

	// print out the final score and the letter grade
	cout << " Your final score is ";
	cout << "Your course grade is ";

	return 0;
}