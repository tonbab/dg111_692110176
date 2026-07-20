#include <stdio.h>

int main()
{
    float score,grade ;
    
    printf("Enter your score: ");
    scanf("%f", &score);

    if (score >= 80){
        grade =  (double)(4.0);
        printf("Your score is: %.2f\n", score);
        printf("Your grade: %.2f  A - Passed\n", grade);
    } else if (score >= 75){
        grade =  (double)(3.5);
        printf("Your score is: %.2f\n", score);
        printf("Your grade: %.2f  B+ - Passed\n", grade);
    } else if (score >= 70){
        grade =  (double)(3.0);
        printf("Your score is: %.2f\n", score);
        printf("Your grade: %.2f  B - Passed \n", grade);
    } else if (score >= 65){
        grade =  (double)(2.5);
        printf("Your score is: %.2f\n", score);
        printf("Your grade: %.2f  C+ - Passed\n", grade);
    } else if (score >= 60){
        grade =  (double)(2.0);
        printf("Your score is: %.2f\n", score);
        printf("Your grade: %.2f  C - Passed \n", grade);   
    } else if (score >= 55){
        grade =  (double)(1.5);
        printf("Your score is: %.2f\n", score);
        printf("Your grade: %.2f  D+ - Passed \n", grade);
    } else if (score >= 50){
        grade =  (double)(1.0);
        printf("Your score is: %.2f\n", score);
        printf("Your grade: %.2f  D - Passed\n", grade);
    } else {
        grade =  (double)(0.0);
        printf("Your score is: %.2f\n", score);
        printf("Your grade: %.2f  F - Failed\n", grade);
    }


return 0;
}