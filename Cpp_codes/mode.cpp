#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int *p = new int[10001];
    for(int i = 0; i <= 10000; i++) *(p+i) = 0;

    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        (*(p + x))++;
    }

    int mode = 0;

    for(int i = 0; i <= 10000; i++){
        if(*(p + i) > mode) mode = *(p + i);
    }

    for(int i = 0; i <= 10000; i++){
        if(*(p + i) == mode) cout << i << " ";
    }

    delete[] p;
    return 0;
}