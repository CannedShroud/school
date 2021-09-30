#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter how man rows"<<endl;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cout<<endl;
		for(int j=1;j<=n;j++)
		{
			if(i==1||i==n||j==1||j==n)
			cout<<" X ";
			else
			cout<<" O ";
		}
	}
}
	