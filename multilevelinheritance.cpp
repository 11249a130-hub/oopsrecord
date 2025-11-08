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
class test : public student {
protected:
    int math, eng, sci;
public:
    void gettest() {
        getstudent();
        cout << "Enter math marks: ";
        cin >> math;
        cout << "Enter english marks: ";
        cin >> eng;
        cout << "Enter science marks: ";
        cin >> sci;
    }
    void displaytest() {
        displaystudent();
        cout << "\nMath marks: " << math;
        cout << "\nEnglish marks: " << eng;
        cout << "\nScience marks: " << sci;
    }
};
class result : public test {
private:
    int total;
    float avg;
public:
    void getresult() {
        gettest();
        total = math + eng + sci;
        avg = total / 3.0;
    }
    void displayresult() {
        displaytest();
        cout << "\nTotal Marks: " << total;
        cout << "\nAverage Marks: " << avg;
    }
};
int main() {
    result r1;
    cout << "--- Enter Student Details ---\n";
    r1.getresult();
    cout << "\n\n--- Result ---\n";
    r1.displayresult();
    return 0;
}
