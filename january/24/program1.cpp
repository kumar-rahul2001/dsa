#include <iostream>  // Including input-output stream header file
#include <sstream>   // Including stringstream header file for string manipulation
using namespace std; // Using the standard namespace

int main()
{             // Start of the main function
    int x, y; // Declaring variables x and y to store integer inputs
    cout << "hello" << endl;

    while (cin >> x >> y)
    {                      // Loop to read integer inputs until the end of input (Ctrl+D in terminal)
        stringstream str1; // Declaring a stringstream object 'str1' for string manipulation

        str1 << x + y; // Adding integers x and y and storing the result as a string in stringstream 'str1'

        cout << str1.str().size() << endl; // Printing the size (number of characters) of the resulting string
    }

    return 0; // Indicating successful completion of the program
}