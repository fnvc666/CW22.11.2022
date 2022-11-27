#include <stdio.h>

int main() {
    int choice;
    float km_amount;
    float kw_amount;



    printf("If you want to convert KM to kW, enter '1'. If vice versa, enter '2'\n");
    printf("Enter operation : ");
    scanf("%i", &choice);
    if(choice == 1){
        printf("Enter amount of KM: ");
        scanf("%f", &km_amount);
        km_amount /= 1.36;
        printf("Amount of kW: %f", km_amount);
    }
    else if(choice == 2){
        printf("Enter amount of kW: ");
        scanf("%f", &kw_amount);
        kw_amount *= 1.36;
        printf("Amount of KM: %f", kw_amount);
    }





}



