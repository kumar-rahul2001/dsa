#include <iostream>
using namespace std;

int main()
{
    float faren, celsius;
    cout << "Convert temperature in Fahrenheit to Celsius :" << endl;
    cout << "Input the temperature in Fahrenheit : ";
    cin >> faren;

    celsius = ((faren - 32) * 5) / 9;
    cout << "The temperature in Fahenheit : " << faren << endl;
    cout << "The temperature in Celsius : " << celsius << endl;
    return 0;
}