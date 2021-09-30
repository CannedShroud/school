#include <iostream>
using namespace std;

int neon_check(int num) {
	int sq, temp, sum = 0;
	sq = num * num;

	while (sq != 0){
		temp = sq%10;
		sum += temp;
		sq /= 10;
	}
	cout << "Sum of all the digits in the square of " << num << " is: " << sum << endl;
	return sum;
}

int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	if(neon_check(n)==n)
	cout<<n<<" is a neon number."<<endl;
	else
	cout<<n<<" is not a neon number."<<endl;
	return 0;
}