#include <iostream>

using namespace std;

int main()
{
    int sumeven = 0, sumodd = 0, array[8] = {1, 2, 3, 4, 5, 6, 7, 8};

    cout << "Original array: 1 2 3 4 5 6 7 8" << endl;

    for (int i = 0; i < 8; i++)
    {
        if (i % 2 == 0)
        {
            sumeven += array[i];
        }
        else
        {
            sumodd += array[i];
        }
    }
    cout << "Sum of all even and odd numbers: " << sumodd << "," << sumeven;
    return 0;
}