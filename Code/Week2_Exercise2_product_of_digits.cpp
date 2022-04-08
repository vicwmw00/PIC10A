/*
* Write a program to input a positive integer from user
*    and calculate the product of digits
* 
* Your code should work for all integers ranging from 100 to 999
*/

#include <iostream>

using namespace std;

int main() {
	// get user input
	int three_digit_number = 0; // always better to initialize
	cout << "Input an integer (100 - 999):\n";
	cin >> three_digit_number;
	
	// calculate ones/tens/hundreds digits. (example: 132)
	int ones = three_digit_number % 10; // 132 --> 2
	three_digit_number /= 10; // 132 --> 13
	int tens = three_digit_number % 10; // 13 --> 3
	int hundreds = three_digit_number / 10; // 13 --> 1

	// output the product
	cout << "The product of digits is " << ones * tens * hundreds << endl;

	return 0;
}