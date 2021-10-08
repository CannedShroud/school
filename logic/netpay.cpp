#include <iostream>
using namespace std;

class Employee {
    int empno;
    char ename[20];
    float basic, hra, da;
    float netpay;
    float calculate() {
        return basic + hra + da;
    };
    public:
        void havedata(){
            cout << "Enter empno: ";
            cin >> empno;
            cout << "Enter ename: ";
            cin >> ename;
            cout << "Enter basic: ";
            cin >> basic;
            cout << "Enter hra: ";
            cin >> hra;
            cout << "Enter da: ";
            cin >> da;

            netpay = calculate();
        }

        void displaydata() {
            cout << "empno is: " << empno << endl;
            cout << "ename is: " << ename << endl;
            cout << "basic is: " << basic << endl;
            cout << "hra is: " << hra << endl;
            cout << "da is: " << da << endl;
            cout << "netpay is: " << netpay << endl;

        }

};

int main ()  {
    Employee e1;
    e1.havedata();
    e1.displaydata();
}