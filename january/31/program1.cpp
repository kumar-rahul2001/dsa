#include <iostream>
using namespace std;

int main()
{
    int num;

    cout << "Enter the number : ";
    cin >> num;
    cout << "The sum upto number " << num << " is " << (num * (num + 1)) / 2 << endl;

    return 0;
}