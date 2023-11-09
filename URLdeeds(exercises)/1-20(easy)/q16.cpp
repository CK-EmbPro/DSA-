#include <iostream>
#include <iomanip>
using namespace std;

void reverseNames(string &firstName, string &lastName) {
    string temp;
    temp = firstName;
    firstName = lastName;
    lastName = temp;
}

int main() {
    string firstName, lastName;
    cout << "Input First name: " << endl;
    cin >> firstName;
    cout << "Input Last name: " << endl;
    cin >> lastName;

    reverseNames(firstName, lastName);

    // Set a fixed width for both firstName and lastName
    cout << "Name in reverse is: " << left << setw(8) << firstName << lastName<< endl;
    return 0;
}
