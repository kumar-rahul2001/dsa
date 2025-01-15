#include <iostream>
#include <string>

using namespace std;

int main()
{
    // char firstName[30], lastName[30];
    string firstName, lastName, fullName;
    cout << "Print the name in reverse where last name comes first:" << endl;
    cout << "Input First Name: ";
    cin >> firstName;
    cout << "Input Last Name: ";
    cin >> lastName;

    // Clear the newline character left in the buffer
    cin.ignore();

    cout << "Input Full Name: ";
    getline(cin, fullName);
    cout << "Name in reverse is: " << lastName << " " << firstName << " " << fullName;
    return 0;
}