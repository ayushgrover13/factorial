#include <stdio.h>

int factorial(int number){
    if(number == 0){
        return 1;
    }
    return number * factorial(number-1);
}

int main(){
    int number
    printf("Enter a Number"\n);
    scanf("%d", &number);
    printf("%d\n", factorial(number));
    return 0;
}
