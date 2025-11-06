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
    Number operator-() {
        Number temp;
        temp.x = -x;
        temp.y = -y;
        return temp;
    }
};

int main() {
    Number n1(10, -25), n2;

    cout << "Before applying unary minus operator:\n";
    n1.display();
    n2 = -n1;

    cout << "\nAfter applying unary minus operator:\n";
    n2.display();

    return 0;
}
