#include <stdio.h>

int main(){
    int n;
    printf("Enter a positive number: ");
    scanf("%d", &n);
    float y = (float)n;

    if(n == 0 || n == 1) printf("%d", n);
    else{
        for(int i = 1; i < 20; i++){
            y = (y + n / y) / 2;
        }
    }

    printf("Square root of %d is %f", n, y);
    return 0;
}