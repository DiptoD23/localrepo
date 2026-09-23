#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;
        int array[n];
        for(int i = 0; i < n; i++) cin >> array[i];

        int l, r;
        cin >> l >> r;

        // write code to find coprime between l and r inclusive
        int count = 0;
        for(int i = l; i <= r;  i++)
        {
            bool flag = 0;

            for(int k = 0; k < n; k++)
            {
                int x = array[k];
                int y = i;
                while(y != 0)
                {
                    int temp = y;
                    y = x % y;
                    x = temp;
                }
                if(x == 1) flag = 1 - x;
                else
                {
                    flag = 1 - x;
                    break;
                }
            }
            if(flag == 0) count += 1;
        }
        cout << count << endl << endl;;
    }
    return 0;
}

/*
4
3
4 6 3 
1 10
4
3 7 6 9
10 25
1
3
1 100
5
24 25 26 50 20
423 1423

3
6
67
246

15
42
67
2399
*/