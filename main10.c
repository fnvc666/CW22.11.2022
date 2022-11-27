#include <stdio.h>

int main() {

    int first_number, second_number, third_number;


    printf("Enter numbers.\n");
    printf("First number: ");
    scanf("%d",&first_number);
    printf("Second number: ");
    scanf("%d",&second_number);
    printf("Third number: ");
    scanf("%d",&third_number);

    if(first_number==second_number ||
    first_number==third_number ||
    second_number==third_number){
        printf("1");

    } else{
        printf("0");
    }




    return 0;
}
