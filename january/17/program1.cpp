#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float side, area;
    cout << "Print the area of a hexagon: " << endl;
    cout << "Input the side of the hexagon: ";
    cin >> side;

    area = (6 * side * side) / (4 * tan(M_PI / 6));
    cout << "The area of the hexagon is: " << area << endl;
    return 0;
}