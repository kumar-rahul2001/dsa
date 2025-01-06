#include <iostream>
using namespace std;

int main()
{
    // int pi = PI;
    int r;
    float vol;
    cout << "Calculate the volume of a sphere : " << endl;
    cout << "Input the radius of a sphere : ";
    cin >> r;

    vol = (4 * 3.14 * r * r * r) / 3;
    cout << "The volume of a sphere is : " << vol << endl;
    return 0;
}