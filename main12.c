#include <stdio.h>
#include <math.h>

int main() {

    int result_floor, result_ceil;
    double value = 10.12;

    result_floor = floor(value);
    result_ceil = ceil(value);


    printf("Floor: %d\n", result_floor);
    printf("Celling: %d", result_ceil);

    return 0;
}
