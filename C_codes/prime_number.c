#include <stdio.h>

int _sqrt(int number){
    float y = (float)number;
    if(number == 0 || number == 1) return number;
    else{
        for(int i = 1; i < 20; i++){
            y = (y + number / y) / 2;
        }
    }
    return y;
}
int main(){
    int n, isPrime = 1;
    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n <= 1) isPrime = 0;
    else{
        for(int i = 2; i < _sqrt(n); i++){
            if(n % i == 0){
                isPrime = 0;
                break;
            }
        }
    }
    
    if(isPrime == 1) printf("Prime\n");
    else printf("Not prime\n");

    return 0;
}