#include <iostream>
using namespace std;

#define PI 3.14159

int main()
{

    float radius, circumference, area;
    cout << "Find the area and circumference of any circle : " << endl;
    cout << "Input the radius(1/2 of diameter) of a circle : ";
    cin >> radius;
    area = (PI * (radius * radius));
    circumference = 2 * PI * radius;
    cout << "The area of the circle is : " << area << endl;
    cout << "The circumference of the circle is : " << circumference << endl;
    return 0;
}