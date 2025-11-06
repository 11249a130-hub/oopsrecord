#include <iostream>
using namespace std;

class Book {
private:
    string title;
    string author;
    float price;

public:
    
    void inputDetails() {
        cout << "Enter Book Title: ";
        getline(cin, title);

        cout << "Enter Author Name: ";
        getline(cin, author);

        cout << "Enter Book Price: ";
        cin >> price;
    }

    void displayDetails() {
        cout << "\n--- Book Details ---\n";
        cout << "Title : " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price : $" << price << endl;
    }
};

int main() {
    Book b1; 

    b1.inputDetails();
    b1.displayDetails();

    return 0;
}
