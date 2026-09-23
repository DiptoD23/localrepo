#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int array[n];
    long total = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> array[i];
        total += array[i];
    }
    cout << total;
    return 0;
}