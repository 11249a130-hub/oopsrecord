#include <iostream>
using namespace std;

class Time {
private:
    int hours;
    int minutes;
    int seconds;

public:
    void getTime() {
        cout << "Enter hours, minutes and seconds: ";
        cin >> hours >> minutes >> seconds;
    }
    void displayTime() {
        cout << hours << " hrs " << minutes << " min " << seconds << " sec" << endl;
    }
    void addTime(Time t1, Time t2) {
        seconds = t1.seconds + t2.seconds;
        minutes = t1.minutes + t2.minutes + (seconds / 60);
        hours = t1.hours + t2.hours + (minutes / 60);
        seconds = seconds % 60;
        minutes = minutes % 60;
    }
};

int main() {
    Time time1, time2, result;
    cout << "Enter first time:\n";
    time1.getTime();
    cout << "Enter second time:\n";
    time2.getTime();
    result.addTime(time1, time2);
    cout << "\nTotal time after addition: ";
    result.displayTime();

    return 0;
}