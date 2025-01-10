#include <iostream>
using namespace std;

int main()
{
    float kelvin, fahrenheit;
    cout << "Convert temperature in Kelvin : " << endl;
    cout << "Input the temperature in Kelvin : ";
    cin >> kelvin;
    cout << "The temperature in Kelvin : " << kelvin << endl;
    // fahrenheit = (1.8 * (kelvin - 273.15)) + 32;
    fahrenheit = (9.0 / 5) * (kelvin - 273.15) + 32;
    cout << "The temperature in Fahrenheit : " << fahrenheit << endl;
    return 0;
}