#include <stdio.h>

int main() {
    int a=5;
    int b=5;
    int c=6;
    int d=7;


    printf("a*= : %d \n", a *=a++); // 30
    printf("b*= : %d \n", b *=++b); // 36
    printf("c+= : %d \n", c+=c++ ); // 6 + 6 + 1
    printf("d-= : %d \n", d-=d--); // 7 - 7 - 1


}



