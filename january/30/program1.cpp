#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter the sides of a triangle : ";
    cin >> a >> b >> c;

    if (c * c == a * a + b * b)
    {
        cout << "The given triangle is a right angle triangle" << endl;
    }
    else
    {
        cout << "The given triangle is not a right angle triangle." << endl;
    }

    return 0;
}