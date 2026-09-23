#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i = 1; i <= n; i++){
        int oddSum = 0;
        int evenSum = 0;
        cout << "(";

        for(int j = 1; j <= i; j++){
            if(j > 1){
                if(j % 2 == 0) cout << " - ";
                else           cout << " + ";
            }

            int odd = 2 * j - 1;
            cout << odd;
            if(j % 2 == 1) oddSum += odd;
            else           oddSum -= odd;
        }

        cout << ")*(";

        for(int j = 1; j <= i; j++){
            if(j > 1){
                if(j % 2 == 0) cout << " - ";
                else           cout << " + ";
            }

            int even = 2 * j;
            cout << even;
            if(j % 2 == 1) evenSum += even;
            else           evenSum -= even;
        }
        cout << ")";
        sum += oddSum * evenSum;
        if(i < n) cout << " + ";
    }
    cout << "\nSum = " << sum;
}