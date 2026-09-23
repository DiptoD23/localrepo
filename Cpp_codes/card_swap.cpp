#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Initial order: ";
    int max = 0;
    int maxIdx = -1;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if(max < arr[i]) max = arr[i];
    }

    int t;
    cin >> t;

    for(int i = 0; i < t; i++)
    {
        int cmd;
        cin >> cmd;

        cout << "After instruction " << i + 1 << ": ";
        if(cmd > 0){
            cmd = cmd % n;
            for(int j = 0; j < cmd; j++)
            {
                int temp = arr[n - 1];
                for(int k = n - 1; k >= 1; k--) arr[k] = arr[k - 1];
                arr[0] = temp;
            }
        }
        else if(cmd < 0)
        {
            cmd = -cmd;
            cmd = cmd % n;
            for(int j = 0; j < cmd; j++)
            {
                int temp = arr[0];
                for(int k = 0; k < n - 1; k++) arr[k] = arr[k + 1];
                arr[n - 1] = temp;
            }

        }
        for(int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;
    }
    
    for(int i = 0; i < n; i++) if(arr[i] == max) maxIdx = i;
    cout << "Winner: Child " << maxIdx + 1;
    return 0;
}

/*

10
6271 12897 127683 178761 17783 767123 7638 87131 73272 71671
8
12 -98 87 34 -14662 98788 -9789 -656787675



Initial order: 6271 12897 127683 178761 17783 767123 7638 87131 73272 71671
After instruction 1: 73272 71671 6271 12897 127683 178761 17783 767123 7638 87131
After instruction 2: 7638 87131 73272 71671 6271 12897 127683 178761 17783 767123
After instruction 3: 71671 6271 12897 127683 178761 17783 767123 7638 87131 73272
After instruction 4: 767123 7638 87131 73272 71671 6271 12897 127683 178761 17783
After instruction 5: 87131 73272 71671 6271 12897 127683 178761 17783 767123 7638
After instruction 6: 71671 6271 12897 127683 178761 17783 767123 7638 87131 73272
After instruction 7: 73272 71671 6271 12897 127683 178761 17783 767123 7638 87131
After instruction 8: 178761 17783 767123 7638 87131 73272 71671 6271 12897 127683
Winner: Child 3

*/