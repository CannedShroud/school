# include <iostream>

using namespace std;

int rev = 0;
int t;

bool palindrome_check(int num) {
    int r;

    if (num > 0) {
        r = num%10;
        rev = rev * 10 + r;
        palindrome_check(num/10);
    }
    else {
        cout << "Reversal of " << t << " is " << rev << endl;
        if (rev == t) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    t = n;
    if (palindrome_check(n)) {
        cout << "The number is a palindrome!";
    }
    else {
        cout << "Palindromen't";
    }
    return 0;
}