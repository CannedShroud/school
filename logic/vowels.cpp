#include <iostream>
using namespace std;

void process(char a[20]){
	int w=0,v=0,c=0;
	
	for(int i=0; a[i]!='0';i++){
		if(isalpha(a[i])||a[i]==' '){
			if (isupper(a[i])){
				tolower(a[i]);
			}
				switch(a[i]){
					case 'a':
					case 'e':
					case 'i':
					case 'o':
					case 'u':
						v++;
						break;
					case ' ':
						w++;
						break;
					default: 
						c++;
			}
		}
	}
	cout<<"Number of consonants: "<<c+1<<endl;
	cout<<"Number of words: "<<w+1<<endl;
}



int main()
{
	char a[20];
	cout<<"Enter a sentence "<<endl;
	cin>>a;
	process(a);
}


   	
