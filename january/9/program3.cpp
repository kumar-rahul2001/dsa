#include <iostream>
using namespace std;

int main()
{
    float dis, miles;
    cout << "Convert kilometers per hour to miles per hour :" << endl;
    cout << "Input the distance in kilometer : ";
    cin >> dis;
    miles = dis * 0.621371;
    cout << "The " << dis << " Km./hr. means " << miles << " Miles/hr." << endl;
    return 0;
}