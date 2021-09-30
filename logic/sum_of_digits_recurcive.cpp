#include <iostream>
using namespace std;

int sum (int num) {
    if (num > 0){
        int temp = num%10 + sum(num/10);
        return temp;
    }
    else {
        return 0;
    }
}

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Sum of digits of "<< n <<" is "<< sum(n);
	return 0;
}
