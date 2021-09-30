#include <iostream>

using namespace std;

struct student {
    char name[20];
    char grade;   
    char gender;
    int roll;
};

int main () {
    student s1;
    cout << "Enter the details of student 1 \nName: ";
    cin >> s1.name;
    cout << endl;
    cout << "Roll: ";
    cin >> s1.roll;
    cout << endl;
    cout << "Gender: ";
    cin >> s1.gender;
    cout << endl;
    cout << "Grade: ";
    cin >> s1.grade;
    cout << endl;
    for (int i=1; i<=10;i++){
        cout << "\n" <<endl;
    }
    cout << "Student 1:\nName: " << s1.name << "\nRoll: " << s1.roll << "\nGrade: " << s1.grade << "\nGender: " << s1.gender << endl;
}