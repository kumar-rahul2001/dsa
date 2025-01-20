#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double lat1, lat2, long1, long2, dis, er, r;
    cout << "Print the the distance between two points on the surface of earth: " << endl;
    cout << "Input the latitude of coordinate 1: ";
    cin >> lat1;
    cout << "Input the longitude of coordinate 1: ";
    cin >> long1;
    cout << "Input the latitude of coordinate 2: ";
    cin >> lat2;
    cout << "Input the longitude of coordinate 2: ";
    cin >> long2;

    r = 0.01745327; // Conversion factor Pi/180

    // Converting latitude and longitude values from degrees to radians
    lat1 = lat1 * r;
    lat2 = lat2 * r;
    long1 = long1 * r;
    long2 = long2 * r;

    er = 6371.01; // Earth's radius in kilometers

    // Calculating the distance between two points on the Earth's surface using Haversine formula
    dis = er * acos((sin(lat1) * sin(lat2)) + (cos(lat1) * cos(lat2) * cos(long1 - long2)));

    cout << "The distance between those points is: " << dis << endl;
    return 0;
}