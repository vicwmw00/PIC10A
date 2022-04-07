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
#include <cmath> // enables us to use "cos" and "sin"

using namespace std;

int main() { 
	double A = 0., B = 0.; // initialize before use
	cout << "What is the degree of angle A?" << endl;
	cin >> A;
	cout << "What is the degree of angle B?" << endl;
	cin >> B;

	const double pi = 3.141592; // better coding practice (making it const double)
	// now we convert (deg --> rad)
	A *= (pi / 180.);
	B *= (pi / 180.);
	cout << "The left-hand-side of the trig identity is "
		<< cos(A + B) << endl;
	cout << "The right-hand-side of the trig identity is "
		<< cos(A)*cos(B) - sin(A)*sin(B) << endl;
	return 0;
}