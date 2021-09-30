# include <iostream>
using namespace std;

void factorial(int num){
	int fact = 1;
	while (num > 0) {
		fact *= num;
		num--;
	}
	cout<<fact<<endl;
}
int main()
{
	int n;
	cout<<"Enter a number: ";
	cin>>n;
	cout<<"Factorial of "<<n<<" is ";
	factorial(n);
	return 0;
}