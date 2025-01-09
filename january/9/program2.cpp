#include <iostream>
using namespace std;

int main()
{
    float first, second, third;

    cout << "Find the third angle of a triangle : " << endl;
    cout << "Input the 1st angle of the triangle : ";
    cin >> first;
    cout << "Input the 2nd angle of the triangle : ";
    cin >> second;
    third = (180 - first - second);
    cout << "The 3rd angle of the triangle is : " << third << endl;
    return 0;
}