#include <iostream>
#include <string>
using namespace std;
class student {
private:
    string name;
    int rno;
public:
    void getstudent() {
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rno;
    }
    void displaystudent() {
        cout << "Name of the student: " << name;
        cout << "\nRoll number of the student: " << rno;
    }
};
class bsc : public student {
private:
    int phy, chem, math;
public:
    void getbsc() {
        getstudent();
        cout << "Enter math marks: ";
        cin >> math;
        cout << "Enter physics marks: ";
        cin >> phy;
        cout << "Enter chemistry marks: ";
        cin >> chem;
    }
    void displaybsc() {
        displaystudent();
        cout << "\nMath marks: " << math;
        cout << "\nPhysics marks: " << phy;
        cout << "\nChemistry marks: " << chem;
    }
};
class ba : public student {
private:
    int hindi, punjabi;
public:
    void getba() {
        getstudent();
        cout << "Enter Hindi marks: ";
        cin >> hindi;
        cout << "Enter Punjabi marks: ";
        cin >> punjabi;
    }

    void displayba() {
        displaystudent();
        cout << "\nHindi marks: " << hindi;
        cout << "\nPunjabi marks: " << punjabi;
    }
};
int main() {
    bsc b1;
    ba b2;
    int choice;
    cout << "1. BSc\n2. BA\nEnter your stream: ";
    cin >> choice;
    cout << "\n";
    if (choice == 1) {
        b1.getbsc();
        cout << "\n--- Student Details (BSc) ---\n";
        b1.displaybsc();
    } else {
        b2.getba();
        cout << "\n--- Student Details (BA) ---\n";
        b2.displayba();
    }
    return 0;
}
