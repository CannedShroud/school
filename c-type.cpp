#include <iostream>
#include <stdio.h>
#include <ctype.h>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    ch = getchar();
    if (isalnum(ch)){
        cout << ch << " is an alphabet or a number." << endl;

        if (isalpha(ch)){
            cout << ch << " is a alphabet." << endl;
            if (islower(ch)){
                cout << ch << " is lower." << endl;
                ch = toupper(ch);
                cout << "After converting to uppercase " << ch << endl;
            }
            else {
                cout << ch << " is upper." << endl;
                ch = tolower(ch);
                cout << "After converting to lowercase " << ch << endl;
            }
        }
        else {
            cout << ch << " is a number." << endl;
        }
    }
    else {
        cout << ch << " is a special character." << endl;
    }
}