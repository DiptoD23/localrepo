#include <iostream>
using namespace std;

int main(){
    int unit;
    float bill = 0.0;
    cout << "Enter consumed unit: ";
    cin >> unit;
    float a, b, c;
    a = 100 * 2.0;
    b = 200 * 2.5;
    c = 200 * 5.0;

    if     (unit <= 100) bill = unit * 2.0;
    else if(unit <= 300) bill = a + (unit - 100) * 2.5;
    else if(unit <= 500) bill = a + b + (unit - 300) * 5.0;
    else                 bill = a + b + c + (unit - 500) * 7.0;

    cout << "Bill: BDT " << bill << " Tk";
    return 0;
}