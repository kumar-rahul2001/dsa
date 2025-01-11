#include <iostream>
using namespace std;

int main()
{
    float num1, num2, last1, last2, total, avg;
    cout << "Compute the total and average of four numbers :" << endl;
    cout << "Input 1st two numbers (separated by space) : ";
    cin >> num1 >> num2;
    cout << "Input last two numbers (seperated by space) : ";
    cin >> last1 >> last2;
    total = num1 + num2 + last1 + last2;
    avg = total / 4;
    cout << "The toal of four number is : " << total << endl;
    cout << "The average of four number is : " << avg << endl;
    return 0;
}