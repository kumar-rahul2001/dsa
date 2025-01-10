#include <iostream>
using namespace std;

int main()
{
    float frh, kelvin;
    cout << "Convert temperature in Fahrenheit to Kelvin :" << endl;
    cout << "Input the temperature in Fahrenheit : ";
    cin >> frh;
    cout << "The temperature in Fahrenheit : " << frh << endl;
    kelvin = (5.0 / 9) * (frh - 32) + 273.15;
    cout << "The temperature in Kelvin : " << kelvin << endl;
    return 0;
}