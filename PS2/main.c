#include <stdio.h>

int main(void) {
    //initialising variable for taking user input
    int num;
    //collecting user number input
    printf("Enter a number: ");
    scanf("%d",&num);
    //performing checks to see if the inputted number is positive/negative/0 and printing the results
    if (num>0){
    printf("The number is positive");
    }
    else if (num<0) {
        printf("The number is negative");
    }
    else {
        printf("The number is zero");
    }
    return 0;
}
