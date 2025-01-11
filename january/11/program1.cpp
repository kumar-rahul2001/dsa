#include <iostream>
using namespace std;

int main()
{
    float kel, celsius;
    cout << "Convert temperature in Celsius to Kelvin : " << endl;
    cout << "Input the temperature in Celsius : ";
    cin >> celsius;
    cout << "The temperature in Celsius : " << celsius << endl;
    kel = celsius + 273.15;
    cout << "The temperature in Kelvin : " << kel << endl;
    return 0;
}