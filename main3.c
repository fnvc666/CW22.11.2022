#include <stdio.h>

int main() {

    int my_number = 84479;
    int stop = my_number + 15;

// Method 1
    for(int i=0; i <=15; i++)
    {
        printf("%i\n", my_number+i);
    }

    printf("\n");
// Method 2 and 3

    for (int i = my_number; i< stop; i++){
        if(i % 4 == 0)
        {
            printf("%i division with 4\n", i);
        }
        if(i % 2 == 0)
        {
            printf("%i division with 2 - even\n", i);
        }
        else if(i % 3 == 0 && i % 5 == 0)
        {
            printf("%i divisoin with 3 and 5 \n", i);
        }

    }

}



