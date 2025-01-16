#include <iostream>

using namespace std;

int main()
{
    int p, r, t;
    cout << "Calculate the Simple Interest : " << endl;
    cout << "Input the Principle : ";
    cin >> p;
    cout << "Input the Rate of Interest : ";
    cin >> r;
    cout << "Input the Time : ";
    cin >> t;
    cout << "The Simple interest for the amount " << p << " for " << t << " year @ " << r << " % is : " << (p * r * t) / 100 << endl;
    return 0;
}