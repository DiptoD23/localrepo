#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float cx, cy, r, x, y;
    cout << "Circle Center: ";
    cin >> cx >> cy;
    cout << "Radius: ";
    cin >> r;
    cout << "Point: ";
    cin >> x >> y;

    float d = sqrt(pow(cx-x, 2) + pow(cy-y, 2));

    if(r == d) cout << "Point is on the circle.";
    else if(r > d) cout << "Point is inside the circle.";
    else if(r < d)  cout << "Point is outside the circle.";
    cout << endl;
    return 0;

}