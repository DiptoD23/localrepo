#include <iostream>
using  namespace std;

int main(){
    int a, b, c;
    cout << "Enter three sides of a triangle: ";
    cin >> a >> b >> c;

    if((a+b) > (c) and (b+c) > (a) and (c+a) > (b)) cout << "Valid\n";
    else cout << "Invalid\n";
    return 0;
}