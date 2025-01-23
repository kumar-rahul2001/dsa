#include <iostream>  // Including input-output stream header file
#include <vector>    // Including vector header file
#include <algorithm> // Including algorithm header file for sort function
using namespace std; // Using the standard namespace

int main()
{                     // Start of the main function
    vector<int> nums; // Declaring a vector to store integers

    int n;
    while (cin >> n)
    {                      // Loop to read integers from input until the end of input (Ctrl+D in terminal)
        nums.push_back(n); // Storing the read integers in the vector
    }

    sort(nums.rbegin(), nums.rend()); // Sorting the vector in descending order

    for (int i = 0; i != 3; ++i)
    {                            // Looping three times to print the first three elements of the sorted vector
        cout << nums[i] << endl; // Printing the elements
    }

    return 0; // Indicating successful completion of the program
}