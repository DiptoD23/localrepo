#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr1[n];
    int arr2[n];
    int place[n + 1];
    for(int i = 0; i < n; i++){
        cin >> arr1[i];
        place[arr1[i]] = i;
    }

    for(int i = 0; i < n; i++) cin >> arr2[i];

    int count = 0;

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int a = arr2[i];
            int b = arr2[j];

            if(place[a] < place[b]) count++;
        }
    }
    cout << count;
    return 0;
}