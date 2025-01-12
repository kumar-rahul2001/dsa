#include <iostream>
using namespace std;

int main()
{
    int rows = 6, cols = 4, num;
    cout << "Make a rectangular shape by a single digit number : " << endl;
    cout << "Input the number : ";
    cin >> num;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                cout << num;
            }
            else
            {
                if (j == 0 || j == cols - 1)
                {
                    cout << "5";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}