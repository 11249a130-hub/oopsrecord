#include <iostream>
using namespace std;

class Number {
private:
    int x, y;

public:
    
    Number(int a = 0, int b = 0) {
        x = a;
        y = b;
    }

    
    void display() {
        cout << "x = " << x << ", y = " << y << endl;
    }

    
    Number operator++() {
        ++x;
        ++y;
        return *this;
    }

    
    Number operator--() {
        --x;
        --y;
        return *this;
    }
};

int main() {
    Number n1(5, 10);

    cout << "Initial values:\n";
    n1.display();

    ++n1; 
    cout << "\nAfter pre-increment (++n1):\n";
    n1.display();

    --n1; 
    cout << "\nAfter pre-decrement (--n1):\n";
    n1.display();

    return 0;
}
