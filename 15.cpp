#include <iostream>
using namespace std;

class Student {
private:
    string name;
    float height; 

public:

    void inputDetails() {
        cout << "Enter Student Name: ";
        cin >> name;
        cout << "Enter Height (in cm): ";
        cin >> height;
    }

    bool operator > (Student s) {
        return height > s.height;
    }

    void display() {
        cout << "Name: " << name << ", Height: " << height << " cm" << endl;
    }

    string getName() {
        return name;
    }
};

int main() {
    Student s1, s2;

    cout << "Enter details for Student 1:\n";
    s1.inputDetails();

    cout << "\nEnter details for Student 2:\n";
    s2.inputDetails();

    cout << "\n--- Student Details ---\n";
    s1.display();
    s2.display();
}

   
