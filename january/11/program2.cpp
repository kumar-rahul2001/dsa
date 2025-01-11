#include <iostream>
#include <math.h>
#define PI 3.14159
using namespace std;

int main()
{
    float a, b, angle, area;
    cout << "Find the area of Scalen Triangle :" << endl;
    cout << "Input the length of a side of the triangle : ";
    cin >> a;
    cout << "Input the length of another sides of the triangle : ";
    cin >> b;
    cout << "Input the angle between these sides of the triangle : ";
    cin >> angle;
    area = (a * b * sin((PI / 180) * angle)) / 2;
    cout << "The area of the Scalene Triangle is : " << area << endl;
    return 0;
}