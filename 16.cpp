#include <iostream>
#include <string>
using namespace std;

class AddString {
private:
    string str;

public:
   
    AddString(string s = "") {
        str = s;
    }

    AddString operator+(AddString &obj) {
        AddString temp;
        temp.str = str + obj.str; 
        return temp;
    }

  
    void display() {
        cout << str << endl;
    }
};


int main() {
    AddString s1("Hello ");
    AddString s2("dileep!");
    AddString s3;

  
    s3 = s1 + s2;

    cout << "String 1: ";
    s1.display();

    cout << "String 2: ";
    s2.display();

    cout << "After Concatenation: ";
    s3.display();

    return 0;
}
