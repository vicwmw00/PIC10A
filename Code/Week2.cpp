#include <iostream>
using namespace std;

int main() {

	int n = 4.567; // what is the value of n?
	cout << n << endl;

	//// Machine Epsilon
	//double eps = 1.0 / 1024 / 1024 / 1024 / 1024 / 1024;
	//cout << "eps = " << eps << ", but 1+eps-1 = " << (1 + eps) - 1 << endl;
	//eps /= 2.0;
	//cout << "eps = " << eps << ", but 1+eps-1 = " << (1 + eps) - 1 << endl;
	//eps /= 2.0;
	//cout << "eps = " << eps << ", but 1+eps-1 = " << (1 + eps) - 1 << endl;
	//eps /= 2.0;
	//cout << "eps = " << eps << ", but 1+eps-1 = " << (1 + eps) - 1 << endl;
	//eps /= 2.0;
	//cout << "eps = " << eps << ", but 1+eps-1 = " << (1 + eps) - 1 << endl;

	//// Type Cast
	//double x = 5; // 5.678;
	//int y = static_cast<int>(x);


	//// Participation Question
	//double runTime = 7345.24;
	//int a = static_cast<int>(runTime + 0.5);
	//int hours = a / 3600;
	//int minutes = (a % 3600) / 60;
	//int seconds = a % 60;

	//cout << "Rounded run time: "
	//	<< hours << " hour(s), " << minutes
	//	<< " minute(s), " << seconds << " second(s)";

	//// Output accuracy is important for your HW
	//cout << endl;
	//cout << "Hello, World!" << endl; // if the output is supposed to be this,
	//cout << "Hello World!" << endl; // this is wrong
	//cout << "Hello, world!" << endl; // this is also wrong

	// Exercise:
	// Write a program to input a positive integer from user and calculate the product of digits
	// Your code should work for all integers ranging from 100 to 999


	return 0;
}