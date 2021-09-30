#include <iostream>
using namespace std;

int factorial(int num){
	if (num != 0){
		int temp = num * (factorial(num-1));
		return temp;

	}
	else
		return 1;
}

int main() {
	int n;
	cout << "Enter a number: ";
	cin >> n; 
	cout << "Factorial of " << n << " " << " is " << factorial(n);
	return 0;
}