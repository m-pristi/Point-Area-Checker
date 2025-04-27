#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x, y;

    // Input the coordinates of the point
    cout << "Enter the coordinates of the point on the plane: \n ";
    cin >> x >> y;

    // Check if the point belongs to the area
    if ((x >= -1 && x <= 1 && y >= 0 && y <= 2) || // Rectangle
        (x >= -3 && x <= -1 && y <= x + 3) ||      // Left triangle
        (x >= 1 && x <= 3 && y <= -x + 3) ||       // Right triangle
        (y >= pow(x, 2) - 9 && y <= 0 && !(y > -4 && y < pow(x, 2) - 1 && x > -1 && x < 1)) // Parabola with exception area
        )
        cout << "The point belongs to the area\n ";
    else
        cout << "The point does not belong to the area\n ";

    return 0;
}
