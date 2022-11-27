#include <stdio.h>

int main() {

    int max_value, result = 0;

    printf("Enter the maximum value:\n");
    scanf("%d", &max_value);

    for(int i=0; i<=max_value; i++){
        result += i;
    }

    printf("%d", result);
    return 0;
}