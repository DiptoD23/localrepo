#include <iostream>
using namespace std;

int main(){
    int sales;
    cout << "Enter sales amount: ";
    cin >> sales;
    float commission = 0.0;

    if(sales <= 2e4) commission = 0.0;
    else if(sales <= 5e4) commission = (sales - 2e4) * 5e-2;
    else if(sales < 1e5) commission = 3e4 * 5e-2 + (sales - 5e4) * 7e-2;
    else commission = 3e4 * 5e-2 + 5e4 * 7e-2 + (sales - 1e5) * 1e-1;

    cout << "Commission: BDT " << commission << " Tk\n";
    return 0;
}