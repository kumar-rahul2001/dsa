#include <iostream>

using namespace std;

int main()
{
    char single_char;

    cout << "Print code (ASCII code / Unicode code etc.) of a given character:" << endl;

    cout << "Input a Character : ";
    cin >> single_char;

    cout << "The ASCII value of " << single_char << " is : " << static_cast<int>(single_char) << endl;
    cout << "The character for the ASCII value " << static_cast<int>(single_char) << " is : " << single_char << endl;
    return 0;
}