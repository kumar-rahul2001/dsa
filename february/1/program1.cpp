#include <iostream> // Including input-output stream header file
#include <iomanip>  // Including input-output manipulator header file
#include <cmath>    // Including math functions header file

using namespace std; // Using the standard namespace

int main()
{
    // Declaring variables for coordinates and calculations
    double a, b, c, x1, y1, x2, y2, x3, y3, xp, yp, d, radius;

    // Loop to read input coordinates until the end of input
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3)
    {
        // Calculating lengths of the sides of the triangle formed by the coordinates
        a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
        b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
        c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));

        // Calculating the radius of the circumscribed circle using triangle sides
        radius = (a * b * c) / (sqrt((a + b + c) * (b + c - a) * (c + a - b) * (a + b - c)));

        // Calculating the coordinates of the center of the circumscribed circle (x, y)
        d = 2 * (x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2));
        xp = ((x1 * x1 + y1 * y1) * (y2 - y3) + (x2 * x2 + y2 * y2) * (y3 - y1) + (x3 * x3 + y3 * y3) * (y1 - y2)) / d;
        yp = ((x1 * x1 + y1 * y1) * (x3 - x2) + (x2 * x2 + y2 * y2) * (x1 - x3) + (x3 * x3 + y3 * y3) * (x2 - x1)) / d;

        // Outputting the coordinates and radius of the circumscribed circle
        cout << fixed << setprecision(3) << "Central coordinate of the circumscribed circle: (" << xp << ", " << yp << ")\nRadius: " << radius << endl;
    }

    return 0;
}
