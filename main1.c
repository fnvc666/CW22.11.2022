#include <stdio.h>

int main() {
    char name[] = "Sivak";
    char surname[] = "Pavel";
    char interest[] = "Basketball, C language";
    int age = 18;
    int student_number = 84479;
    int sum = age + student_number;

    printf("Student's name: %s %s\n", name, surname);
    printf("Student's age: %i\n", age);
    printf("Student like %s\n", interest);
    printf("Sum of age and student number = %d\n", sum);


}
