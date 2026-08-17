#include <stdio.h>

int main() {
    //initialising placeholder variables for user input
    int age_1, age_2, age_3;
    int roll_1, roll_2, roll_3;
    char name_1[40], name_2[40], name_3[40];
    char aadhar_1[20], aadhar_2[20], aadhar_3[20];

    //collecting user inputs for student 1
    printf("Enter your student 1 name: ");
    scanf("%s", name_1);
    printf("Enter student 1 age:");
    scanf("%d", &age_1);
    printf("Enter student 1 roll number:");
    scanf("%d", &roll_1);
    printf("Enter student 1 AADHAR number:");
    scanf("%s", aadhar_1);

    //collecting the user inputs for student 2
    printf("Enter your student 2 name: ");
    scanf("%s", name_2);
    printf("Enter student 2 age:");
    scanf("%d", &age_2);
    printf("Enter student 2 roll number:");
    scanf("%d", &roll_2);
    printf("Enter student 2 AADHAR number:");
    scanf("%s", aadhar_2);

    //collecting the user inputs for student 3
    printf("Enter your student 3 name: ");
    scanf("%s", name_3);
    printf("Enter student 3 age:");
    scanf("%d", &age_3);
    printf("Enter student 3 roll number:");
    scanf("%d", &roll_3);
    printf("Enter student 3 AADHAR number:");
    scanf("%s", aadhar_3);

    //printing the table header
    printf("Name\t\tRoll Number\tAADHAR Number\n");
    //checking whether each student is above 18 and printing accordingly
    if (age_1>18) {
        printf("%s\t\t%d\t\t%s\n", name_1, roll_1, aadhar_1);
    }
    if (age_2>18) {
        printf("%s\t\t%d\t\t%s\n", name_2, roll_2, aadhar_2);
    }
    if (age_3>18) {
        printf("%s\t\t%d\t\t%s\n", name_3, roll_3, aadhar_3);
    }
}
