/*
* PIC10A 1A, Spring 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Grade Calculator ver.2
*
* Write a program that will calculate
* a student's final score in some class
* on the following dual grading system:
* [Scheme A] Midterm 30%, Final 40%, HW 30%
* [Scheme B] Midterm dropped, Final 70%, HW 30%
*
* Assume that there will be N HW assignments total,
* where N is given by the user,
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
* 
* Challenge: Can you replace the if-elseif-else clauses 
*  with a single expression? (without switch-case)
* HINT: Consider Booleans as numeric values
* 
*/

#include <iostream>

using namespace std;

int main() {
	// I provide here the input and output format for you to save time
	
	// use descriptive names, and initialize them
	double mid = 0., fin = 0;
	int nHW = 3; // default value 3
	
	// get user inputs
	cout << "Please enter the midterm score (0 - 100): ";
	cin >> mid;
	cout << "Please enter the final exam score (0 - 100): ";
	cin >> fin;
	cout << "Please enter the number of homework assignments (3 - 10): ";
	cin >> nHW;

	// HINT: a loop should appear here
	cout << "Please enter the homework [i] score (0 - 100): "; // [i] should change in the loop
	// cin >> [some variable here];
	// HINT: find the lowest HW score and manage the sum in the loop as well
	//       to avoid introducing unnecessary "arrays" or "vectors"


	// print out the final scores from two schemes
	cout << "Your final score based on Scheme A is ";
	cout << "Your final score based on Scheme B is ";

	// print out the final score and the letter grade
	cout << " Your final score is ";
	cout << "Your course grade is ";
	// Challenge: Can you replace the if-elseif-else clauses for letter grade
	//            by a single expression here? (without switch-case)

	return 0;
}