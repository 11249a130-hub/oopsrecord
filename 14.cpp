#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    
    Time(int h = 0, int m = 0, int s = 0) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    void getTime() {
        cout << "Enter Hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin >> minutes;
        cout << "Enter Seconds: ";
        cin >> seconds;
    }

    
    void display() const {
        cout << hours << "h : " << minutes << "m : " << seconds << "s" << endl;
    }

    
    bool operator>(Time t) const {
        if (hours > t.hours)
            return true;
        else if (hours == t.hours && minutes > t.minutes)
            return true;
        else if (hours == t.hours && minutes == t.minutes && seconds > t.seconds)
            return true;
        else
            return false;
    }
};

int main
    () {
    Time t1, t2;

    cout << "Enter First Time:\n";
    t1.getTime();

    cout << "\nEnter Second Time:\n";
    t2.getTime();

    cout << "\nFirst Time: ";
    t1.display();

    cout << "Second Time: ";
    t2.display();

   
    if (t1 > t2)
        cout << "\nFirst time is greater than second time.\n";
    else
        cout << "\nSecond time is greater than or equal to first time.\n";

    return 0;
}
