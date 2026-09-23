#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n, a, b;
        cin >> n >> a >> b;

        long long mul = a*b;
        long long x = a;
        long long y = b;
        while(y > 0)
        {
            if(x == y) break;
            long long temp = y;
            y = x % y;
            x = temp;
        }
        long long div = mul / x;
        n = n / div;
        cout << n << endl;
    }
    return 0;
}