#include <iostream>
#include <cmath>
using namespace std;

double f(double a);

int main() {  // код з 5.1
	double x;
	cout << "Enter x: ";
	cin >> x;
	cout << "Result = " << (f(x) + f(1 + f(x))) / (1 + pow(f(1 + pow(f(x), 2)), 2));
}

double f(double a) {
	return pow(sin(a), 2) + pow(a, 2) + 1;
}