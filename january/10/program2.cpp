#include <iostream>
using namespace std;

int main()
{

    float kelvin, celsius;
    cout << "Convert temperature in Kelvin : " << endl;
    cout << "Input the temperature in Kelvin : ";
    cin >> kelvin;
    cout << "The temperature in Kelvin : " << kelvin << endl;

    celsius = kelvin - 273.15;
    cout << "The temperature in Celsius : " << celsius << endl;
    return 0;
}