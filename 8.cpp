#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imag;

public:
    void getData() {
        cout << "Enter real and imaginary part: ";
        cin >> real >> imag;
    }
    void displayData() {
        cout << real << " + " << imag << "i" << endl;
    }
    Complex add(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1, c2, result;
    cout << "Enter first complex number:\n";
    c1.getData();
    cout << "Enter second complex number:\n";
    c2.getData();
    result = c1.add(c2);
    cout << "\nSum of complex numbers: ";
    result.displayData();

    return 0;
}