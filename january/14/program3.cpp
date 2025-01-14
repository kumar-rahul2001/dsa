#include <iostream>
using namespace std;

int main()
{
    float width, height, area, peri;
    cout << "Print the area and perimeter of a rectangle:" << endl;
    cout << "Input the width of the rectangle: ";
    cin >> width;
    cout << "Input the height of the rectangle: ";
    cin >> height;
    area = width * height;
    peri = 2 * (width + height);
    cout << "The area of the rectangle is : " << area << endl;
    cout << "The perimeter of the rectangle is : " << peri << endl;

    return 0;
}