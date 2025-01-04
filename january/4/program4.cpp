#include <iostream>
using namespace std;

int main()
{

    cout << "The range of int is [-2147483648, 2147483647]" << endl;

    int n1 = 2147483647, n2 = -2147483648;
    cout << " Overflow the integer range and set in minimum range : " << n1 + 1 << endl;
    cout << " Increasing from its minimum range : " << n1 + 2 << endl;
    cout << " Product is : " << n1 * n1 << endl;
    cout << " Underflow the integer range and set in minimum range : " << n2 - 1 << endl;
    cout << " Decreasing from its minimum range : " << n2 - 2 << endl;
    cout << " Product is : " << n2 * n2 << endl;
    return 0;
}