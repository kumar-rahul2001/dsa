#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Check whether a number is positive, negative or zero : " << endl;
    cout << "Input the number : ";
    cin >> num;

    if (num > 0)
    {

        cout << "The en tered number is positive." << endl;
    }
    else if (num < 0)
    {
        cout << "The entered number is negative." << endl;
    }
    else
    {
        cout << "The entered number is 0;" << endl;
    }
    return 0;
}