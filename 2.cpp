#include <iostream>
#include <iomanip>
using namespace std;
class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    void getData() {
        cout << "\nEnter Roll Number: ";
        cin >> rollNo;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Marks: ";
        cin >> marks;
    }
    void displayData() {
        cout << left << setw(15) << rollNo
             << left << setw(25) << name
             << left << setw(10) << marks << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Student students[n];

    cout << "\n=== Enter Student Details ===" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nStudent " << i + 1 << ":" << endl;
        students[i].getData();
    }

    cout << "\n====" << endl;
    cout << left << setw(15) << "Roll Number"
         << left << setw(25) << "Name"
         << left << setw(10) << "Marks" << endl;
    cout << "----" << endl;

    for (int i = 0; i < n; i++) {
        students[i].displayData();
    }

    cout << "====" << endl;

    return 0;
}
