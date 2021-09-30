#include<iostream>
using namespace std;
int a=50;
int main()
{
	int a=30;
	cout<<"inside main"<<endl;
	cout<<"a="<<a<<" global a="<<::a<<endl;
	{
		int a=20;//local for inner block
		cout<<"inside inner block"<<endl;
		cout<<"a="<<a<<" global a="<<::a<<endl;
	}
	cout<<"re-enter main"<<endl;
	cout<<"a="<<a<<" global a="<<::a<<endl;	
}