#include <iostream>
#include <string> 
using namespace std;

class book
{
private:
    int ACCNO, pages;
    string Bookname, ISBNO, author;
    float price;

public:
    void getdata();
    void display();
};

void book::getdata()
{
    cout << "Enter the ACC NO: ";
    cin >> ACCNO;
    cout << "Number of Pages: ";
    cin >> pages;
    cout << "Enter the ISB NO: ";
    cin >> ISBNO;  
    cout << "Enter the author name: ";
    cin.ignore();  
    getline(cin, author);  
    cout << "Bookname: ";
    getline(cin, Bookname); 
    cout << "Enter the book price: ";
    cin >> price;
}

void book::display()
{
    cout << "ACCNO: " << ACCNO << endl;
    cout << "Bookname: " << Bookname << endl;
    cout << "ISBNO: " << ISBNO << endl;
    cout << "Author: " << author << endl;
    cout << "Number of pages: " << pages << endl;
    cout << "Price of Book: " << price << endl;
}

int main()
{
    int n;
    cout << "Enter the value of n (number of books): ";
    cin >> n;
    book s[n];  
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        s[i].getdata();  
        s[i].display();   
    }

    return 0;
}

