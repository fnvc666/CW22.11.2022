#include <stdio.h>

int main() {

    int first_grade, second_grade, third_grade, forth_grade, fifth_grade, i, amount_of_unsatisfactory_grades;
    float average_value;
    amount_of_unsatisfactory_grades = 0;


    printf("Enter grades.\n");
    printf("First grade: ");
    scanf("%d",&first_grade);
    printf("Second grade: ");
    scanf("%d",&second_grade);
    printf("Third grade: ");
    scanf("%d",&third_grade);
    printf("Forth grade: ");
    scanf("%d",&forth_grade);
    printf("Firth grade: ");
    scanf("%d",&fifth_grade);
    average_value = ((first_grade+second_grade+third_grade+forth_grade+fifth_grade)/5);
    printf("Average value of grades: %f\n", average_value);

    if(first_grade < average_value){
        amount_of_unsatisfactory_grades += 1;
    }
    if(second_grade < average_value){
        amount_of_unsatisfactory_grades += 1;
    }
    if(third_grade < average_value){
        amount_of_unsatisfactory_grades += 1;
    }
    if(forth_grade < average_value){
        amount_of_unsatisfactory_grades += 1;
    }
    if(fifth_grade < average_value){
        amount_of_unsatisfactory_grades += 1;
    }

    printf("Amount of unsatisfactory grades: %d", amount_of_unsatisfactory_grades);



    return 0;
}
