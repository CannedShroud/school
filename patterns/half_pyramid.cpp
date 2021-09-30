#include <iostream>
using namespace std;
int main()
{
	int i,j,n;
	cout<<"Enter number of rows";
	cin>>n;
	for(int i=1;i<=n;i++)
	{
	    cout<<endl;
	    for(int k=1;k<=n;k++)
	    cout<<" ";
	    for(int j=1;j<=i;j++)
	    cout<<"*";
	}
}