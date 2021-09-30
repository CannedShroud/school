#include <iostream>

using namespace std;

class student {
    string name;
    int age;

    public: 
        void setname(string name_){
            name = name_;
        }

        void setage(int age_){
            age = age_;
        }

        void report() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl; 
        }
};

int main() {
    string n = "Chek";
    int a = 16;

    student s1;
    s1.setname(n);
    s1.setage(a);
    s1.report();

    return 0;
}