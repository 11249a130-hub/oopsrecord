#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    string customerName;
    int customerID;
    double units, chargePerUnit, amount, surcharge = 0.0, totalAmount;
    cout << "===== ELECTRICITY BILL GENERATOR =====" << endl;
    cout << "Enter Customer ID: ";
    cin >> customerID;
    cin.ignore(); 
    cout << "Enter Customer Name: ";
    getline(cin, customerName);
    cout << "Enter Units Consumed: ";
    cin >> units;
    if (units <= 100)
        chargePerUnit = 1.20;
    else if (units <= 300)
        chargePerUnit = 1.50;
    else if (units <= 500)
        chargePerUnit = 1.80;
    else
        chargePerUnit = 2.00;
    amount = units * chargePerUnit;
    if (amount > 400)
        surcharge = amount * 0.15;
    totalAmount = amount + surcharge;
    cout << fixed << setprecision(2);
    cout << "\n-----------------------------------------" << endl;
    cout << "           ELECTRICITY BILL              " << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Customer ID      : " << customerID << endl;
    cout << "Customer Name    : " << customerName << endl;
    cout << "Units Consumed   : " << units << endl;
    cout << "Charge per Unit  : Rs. " << chargePerUnit << endl;
    cout << "Amount Charges   : Rs. " << amount << endl;
    cout << "Surcharge        : Rs. " << surcharge << endl;
    cout << "-----------------------------------------" << endl;
    cout << "Net Amount Payable: Rs. " << totalAmount << endl;
    cout << "-----------------------------------------" << endl;

    return 0;
}