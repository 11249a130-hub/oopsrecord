#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    int empID;
    double basicSalary;
    double allowance;
    double deductions;
    double grossSalary;
    double netSalary;

public:
    void getDetails() {
        cout << "\nEnter Employee ID: ";
        cin >> empID;
        cin.ignore(); 
        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;
        cout << "Enter Allowances: ";
        cin >> allowance;
        cout << "Enter Deductions: ";
        cin >> deductions;
    }

    void calculateSalary() {
        grossSalary = basicSalary + allowance;
        netSalary = grossSalary - deductions;
    }

    
    void displayPayroll() {
        cout << "\n===";
        cout << "\nEMPLOYEE PAY SLIP";
        cout << "\n===";
        cout << "\nEmployee ID     : " << empID;
        cout << "\nEmployee Name   : " << name;
        cout << fixed << setprecision(2);
        cout << "\nBasic Salary    : $" << basicSalary;
        cout << "\nAllowance       : $" << allowance;
        cout << "\nDeductions      : $" << deductions;
        cout << "\n---";
        cout << "\nGross Salary    : $" << grossSalary;
        cout << "\nNet Salary      : $" << netSalary;
        cout << "\n===\n";
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee employees[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        employees[i].getDetails();
        employees[i].calculateSalary();
    }

    cout << "\n\n***EMPLOYEE PAYROLL***\n";
    for (int i = 0; i < n; i++) {
        employees[i].displayPayroll();
    }

    return 0;
}
