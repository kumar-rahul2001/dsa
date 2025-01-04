#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int m1 = 5, m2 = 7;
    float f1 = 3.7, f2 = 8.0;
    // keep accounts for precisons learn more about it.
    cout << fixed << setprecision(1);

    cout << m1 << " + " << m2 << " = " << m1 + m2 << endl;
    cout << f1 << " + " << f2 << " = " << f1 + f2 << endl;
    cout << m1 << " + " << m2 << " = " << m1 + f2 << endl;
    cout << m1 << " - " << m2 << " = " << m1 - m2 << endl;
    cout << f1 << " - " << f2 << " = " << f1 - f2 << endl;
    cout << m1 << " - " << m2 << " = " << m1 - f2 << endl;
    cout << m1 << " * " << m2 << " = " << m1 * m2 << endl;
    cout << f1 << " * " << f2 << " = " << f1 * f2 << endl;
    cout << m1 << " * " << m2 << " = " << m1 * f2 << endl;
    cout << m1 << " / " << m2 << " = " << m1 / m2 << endl;
    cout << f1 << " / " << f2 << " = " << f1 / f2 << endl;
    cout << m1 << " / " << m2 << " = " << m1 / f2 << endl;
    return 0;
}