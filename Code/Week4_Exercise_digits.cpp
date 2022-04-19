/*
* PIC10A 1A, Spring 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Digits
*
* Describe the final value of j in this program for general values of i
* 
*/

#include <iostream>

using namespace std;

int main() {
	int i = 4567;
	int j;
	for (j = i; (j / 10) > 0; j /= 10);
	cout << "j = " << j << endl;
	return 0;
}