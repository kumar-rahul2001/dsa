#include <iostream>
using namespace std;

int main()
{
    cout << "Check whether the primitive values crossing the limits or not : " << endl;

    char gender = 'F';
    bool isMarried = true;
    unsigned short numOfsons = 2;
    short yearOfAppt = 2009;
    unsigned int YearlyPackage = 1500000;
    double height = 79.48;
    float gpa = 4.69f;
    long totalDrawan = 12047235L;
    long long balance = 995324987LL;

    cout << "The Gender is : " << gender << endl;
    cout << "Is she married? : " << isMarried << endl;
    cout << "Number of sons she has : " << numOfsons << endl;
    cout << "Year of her appointment : " << yearOfAppt << endl;
    cout << "Salary for a year : " << YearlyPackage << endl;
    cout << "Height is : " << height << endl;
    cout << "GPA is : " << gpa << endl;
    cout << "Salary drawn upto : " << totalDrawan << endl;
    cout << "Balance till : " << balance << endl;
    return 0;
}