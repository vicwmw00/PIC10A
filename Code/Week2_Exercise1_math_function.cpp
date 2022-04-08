/*
* Write a program that verifies the trigonometric identity:
*   cos(A+B) = cos(A)cos(B) - sin(A)sin(B)
* 
* Input two angles A and B in *degrees* from user
*   and convert the angles to radians
* 
* Then output cos(A+B) and cos(A)cos(B) - sin(A)sin(B)
* 
* Note: You will need to include an appropriate library
*/

#include <iostream>
#include <cmath> // to use std::cos and std::sin
using namespace std;

int main() {
	double A = 0., B = 0.; // initializing them is a good coding practice
	// get input from the user
	cout << "What is the degree of angle A?\n"; // you can use '\n' instead of endl
	cin >> A;
	cout << "What is the degree of angle B?" << endl; // or you can use endl, of course
	cin >> B;

	// conver angles from degree to rad
	const double pi = 3.14159265358979323846; // make it const
	// more advanced: "constexpr double pi = 3.14159265358979323846;" is better, but we won't cover it
	A *= pi / 180.; // from degree to pi
	B *= pi / 180.; // from degree to pi
	
	// verify the trig identity
	cout << "The left-hand-side of the trig identity evaluates to " << cos(A + B) << ".\n"; // don't forget to add "." at the end
	cout << "The right-hand-side of the trig identity evaluates to "
		<< cos(A)*cos(B) - sin(A)*sin(B) << ".\n"; // don't forget to add "." at the end
	return 0;
}