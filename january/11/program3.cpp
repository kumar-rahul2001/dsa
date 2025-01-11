#include <iostream>
using namespace std;

int main()
{

    int dividend, divisor, quotient, rem;
    cout << "Compute quotient  and remainder :" << endl;
    cout << "Input the dividend : ";
    cin >> dividend;
    cout << "Input the divisor : ";
    cin >> divisor;
    quotient = dividend / divisor;
    rem = dividend % divisor;
    ;
    cout << "The quotient of the division is : " << quotient << endl;
    cout << "The remainder of the division is : " << rem << endl;
    return 0;
}