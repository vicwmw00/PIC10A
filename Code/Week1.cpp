#include <iostream>
using namespace std;

int main() {
	// Week 1 Tuesday
	cout << "Hello, World!" << endl;

	// Week 1 Thursday
	int x = INT_MIN; // the minimum possible integer for type int
	cout << x << endl << -x << endl;
	// prints out x and -x

	// when x > INT_MIN, no problems at all
	// however, when x == INT_MIN, we have an overflow:
	// (-INT_MIN) is greater than INT_MAX (maximum possible integer for int)
	// and thus we have a negative number when you run the program.

	return 0;
}