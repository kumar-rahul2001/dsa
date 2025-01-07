#include <iostream>
using namespace std;

int main()
{
    int radius, height;
    cout << "Calculate the volume of the cylinder :" << endl;
    cout << "Input the radius of the cylinder : ";
    cin >> radius;
    cout << "Input the height of the cylinder : ";
    cin >> height;
    float area = 3.14 * radius * radius * height;
    cout << "The volume of a cylinder is : " << area << endl;
    return 0;
}