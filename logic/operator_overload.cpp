#include<iostream>
using namespace std;
int main()
{
	int x;
	cout<<"enter a number"<<endl;
	cin>>x;
	cout<<"x before shift "<<x<<endl;
	x=x>>3;
	cout<<"x after shift "<<x<<endl;
	return 0;
}