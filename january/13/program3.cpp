#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int i1 = 4, i2 = 8;
    double d1 = 5.5, d2 = 6.6;
    cout << fixed << setprecision(1);
    cout << "Formatting the output using type casting:" << endl;

    cout << i1 / i2 << endl;
    cout << double(i1) / i2 << endl;
    cout << i1 / double(i2) << endl;
    cout << double(i1 / i2) << endl;
    cout << "Test inplicit type casting : " << endl;
    cout << (int)d1 / i2 << endl;
    cout << (int)(d1 / i2) << endl;
    d1 = i1;
    cout << "int implicitly casts to double:" << endl;
    cout << d1 << endl;
    i2 = d2;
    ;
    cout << "double truncates to int!:" << endl;
    cout << i2 << endl;
    return 0;
}