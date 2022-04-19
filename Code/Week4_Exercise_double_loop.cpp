/*
* PIC10A 1A, Spring 2022, UCLA
* TA: Bumsu Kim
*
* Exercise: Double Loop
*
* Predict the output of this program.
* 
*/

#include <iostream>

using namespace std;

int main() {

	cout << "start" << '\n';
	for (int i = 1; i < 4; ++i) {
		for (int j = 1; j < i; ++j) {
			cout << "*";
		}
		cout << '\n';
	}
	cout << "end";

	return 0;
}