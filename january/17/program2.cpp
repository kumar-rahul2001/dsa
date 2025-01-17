#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float side, length, area;
    cout << "Print the area of a polygon: " << endl;
    cout << "Input the number of sides of the polygon: ";
    cin >> side;
    cout << "Input the length of each side of the polygon: ";
    cin >> length;

    area = (side * length * length) / (4 * tan(M_PI / side));
    cout << "The area of the polygon is: " << area << endl;
    return 0;
}