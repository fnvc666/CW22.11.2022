#include <stdio.h>

int main() {
    int i, n;
    float sum_of_values;
    sum_of_values = 0;

    printf("Enter amount of values: ");
    scanf("%d", &n);
    int array[n];

    for(i=0; i<n; i++){
        scanf("%d", &array[i]);

    }

    for(i=0; i<n; i++){
        sum_of_values += array[i];
    }

    printf("Average: %f", sum_of_values/n);




    return 0;
}
