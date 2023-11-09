#include <iostream>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    Date(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date. Using default date (01/01/2000)." << endl;
            day = 1;
            month = 1;
            year = 2000;
        }
    }

    // Member function to set the date
    void setDate(int d, int m, int y) {
        if (isValidDate(d, m, y)) {
            day = d;
            month = m;
            year = y;
        } else {
            cout << "Invalid date. Date not changed." << endl;
        }
    }

    // Member functions to get the date
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

private:
    // Member function to validate if the date is valid
    bool isValidDate(int d, int m, int y) {
        if (y < 0 || m < 1 || m > 12 || d < 1) {
            return false;
        }

        static int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

        if (y % 4 == 0 && (y % 100 != 0 || y % 400 == 0)) {
            daysInMonth[2] = 29; // Leap year
        }

        return (d <= daysInMonth[m]);
    }   
};      

int main() {
    Date today(10, 11, 2023);  // Create a Date object with a valid date
    Date invalidDate(2, 13, 2022); // Create a Date object with an invalid date

    cout << "Today's date: " << today.getDay() << "/" << today.getMonth() << "/" << today.getYear() << endl;
    cout << "Invalid date: " << invalidDate.getDay() << "/" << invalidDate.getMonth() << "/" << invalidDate.getYear() << endl;

    return 0;
}
