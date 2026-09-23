#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int printable = n % 2 == 0? 0 : 1;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            cout << printable;
            printable = 1 - printable;
        }
        cout << endl;
    return 0;
}