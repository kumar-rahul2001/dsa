#include <iostream>
using namespace std;

int main()
{
    float celsius, farenhite;
    cout << "Convert temperature in Celsius to Fahrenheit : " << endl;
    cout << "Input the temperature in Celsius :";
    cin >> celsius;
    cout << "The temperature in Celsius : " << celsius << endl;
    farenhite = ((9 * celsius) / 5) + 32;
    cout << "The temperature in Celsius : " << farenhite << endl;
    return 0;
}