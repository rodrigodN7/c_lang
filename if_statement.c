/*
 * if_statement.c
 *
 * Using if statement, relational operators, and equality operators
 * Author : Rodrigo Noriega 
 * 
 */ 

#include <stdio.h>

int main(void){

    int num1,num2;

    printf("Enter two integers, and I will tell you \n");
    printf("the relationship they satisfy_: ");

    scanf("%d%d", &num1, &num2);

    if(num1 == num2){
        printf("%d is equal to %d\n", num1,num2);
    }

    if(num1 != num2){
        printf("%d is not equal to %d\n", num1,num2);
    }

    if(num1 < num2){
        printf("%d is less than %d\n", num1,num2);
    }

    if(num1 > num2){
        printf("%d is greater than %d\n", num1,num2);
    }

    if(num1 <= num2){
        printf("%d is less than or equal to %d\n", num1,num2);
    }

    if(num1 >= num2){
        printf("%d is greater than or equal to %d\n", num1,num2);
    }

    return 0;
}