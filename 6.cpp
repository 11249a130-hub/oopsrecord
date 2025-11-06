#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;

public:
  
    Book() {
        cout << "Constructor called!" << endl;
        title = "Unknown";
        author = "Unknown";
    }


    Book(string t, string a) {
        cout << "Parameterized Constructor called!" << endl;
        title = t;
        author = a;
    }

    void display() {
        cout << "\nBook Title : " << title << endl;
        cout << "Author     : " << author << endl;
    }

  
    ~Book() {
        cout << "Destructor called for book: " << title << endl;
    }
};

int main() {
    cout << "Creating first book using default constructor..." << endl;
    Book b1; 
    b1.display();

    cout << "\nCreating second book using parameterized constructor..." << endl;
    Book b2("C++ Programming", "Bjarne Stroustrup");
    b2.display();

    cout << "\nEnd of main function." << endl;

    return 0;
}
