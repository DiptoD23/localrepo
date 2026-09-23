#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout << "How many numbers do you want to enter? ";
    cin >> n;
    int min, max, even, odd, num;
    long long sum;
    float avg = 0.0;

    min = INT_MAX;
    max = INT_MIN;
    even = 0;
    odd = 0;
    sum = 0;

    cout << "Enter " << n << " numbers: ";
    for(int i = 1; i <= n; i++){
        cin >> num;
        if(num >= max) max = num;
        if(num <= min) min = num;
        if(num % 2 == 0) even++;
        else odd++;
        sum += num;
    }
    avg = (float) sum / n;

    cout << "\nMinimum Number: " << min
         << "\nMaximum Number: " << max
         << "\nSum of all Numbers: " << sum
         << "\nAverage: " << avg
         << "\nEven Number Count: " << even
         << "\nOdd Number Count: " << odd;
    return 0;
}