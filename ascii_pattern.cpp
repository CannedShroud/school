#include <iostream>

using namespace std;

int main() {
    int k,n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i=1; i <= n; i++){
        k = 65;
        cout << endl;
        for (int p=1; p <= i; p++){
            cout << " ";
        }
        for (int j=1; j <= n; j++){
            cout << char(k) << " ";
            k++;
        }
    }
}