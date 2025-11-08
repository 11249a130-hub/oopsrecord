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
        getline(cin, name);  
        cout << "Enter roll number of the student: ";
        cin >> rno;
        cin.ignore();  
    }
    void displaystudent() const {
        cout << "Name of the student: " << name << endl;
        cout << "Roll number of the student: " << rno << endl;
    }
};
class address : public student {
private:
    string city;
public:
    void getaddress() {
        getstudent();
        cout << "Enter city: ";
        getline(cin, city);  
    }
    void displayaddress() const {
        displaystudent();
        cout << "City: " << city << endl;
    }
};
int main() {
    address a1;
    a1.getaddress();
    a1.displayaddress();
    return 0;
}
