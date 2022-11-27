#include <stdio.h>

#include <string.h>

int main(){

    int number, k = 10;
    int wrong_counter = 0;
    scanf("%d", &number);

    do{
        printf("%d" ,(number%k)/(k/10));

        number = number - (number%k);
        k*=10;

        if((number% k) == number){
            wrong_counter++;
        }

    }
    while(wrong_counter < 2);

    return 0;
}