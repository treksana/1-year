#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4,a,b,c,ii=0;

    cout << "Coordinates of the first dot (x1,y1) ";
    cin >> x1>>y1;
    cout << "Coordinates of the second dot (x2,y2) ";
    cin >> x2 >> y2;
    cout << "Coordinates of the third dot (x3,y3) ";
    cin >> x3 >> y3;
    a = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    b = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
    c = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
    if ((a == b) && (abs(c - (a * sqrt(2))) < 0.01))
    {
        x4 = x2 + x3 - x1;
        y4 = y2 + y3 - y1;
        cout << "It is a square";
        cout << "Coordinates of the fourth dot " << x4 << " " << y4;
        ii = 1;
    }
    if ((a == c) && (abs(b - (a * sqrt(2))) < 0.01))
    {
        x4 = x1 + x3 - x2;
        y4 = y1 + y3 - y2;
        cout << "It is a square ";
        cout << "Coordinates of the fourth dot " << x4 << " " << y4;
        ii = 1;
    }
    if ((c == b) && (abs(a - (b * sqrt(2))) < 0.01))
    {
        x4 = x2 + x3 - x1;
        y4 = y2 + y3 - y1;
        cout << "It is a square";
        cout << "Coordinates of the fourth dot " << x4 << " " << y4;
        ii = 1;
    }
    if (ii == 0)
    {
        cout << "It is not a square";
    }
    return 0;
}
