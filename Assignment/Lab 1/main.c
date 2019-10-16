//Ryan Boylan
//Lab 1

#include <stdio.h>

int math(int num1, int num2, char op);      //function definition

int main()

{
    int num1;                               //define variable num1
    int num2;                               //define variable num2
    char operation;                         //define variable operation
    int result;                             //define variable result
    printf("Please enter a number:");       //Ask user for value
    scanf("%d", &num1);                     //Store user input
    printf("Please enter another number:"); //Ask user for second value
    scanf("%d", &num2);                     //Store user input
    printf("Please enter an operation:");   //Ask user for operation
    scanf(" %c", &operation);               //Store user input
    result = math(num1, num2, operation);   //Stores result as return of math function
    printf("Your Result is: %d", result);   //Display result to user
    return 0;
}

int math(int num3, int num4, char oper)     //Function definition
{
int result1;                                //define variable result 1
    switch(oper)                            //switch statement based on oper variable
    {
        case '+':                           //Case when oper == '+'
        result1 = num3 + num4;              //addition
        break;                              //break from case
        case '-':                           //Case when oper == '+'
        result1 = num3 - num4;              //subtraction
        break;                              //break from case
        case '*':                           //Case when oper == '+'
        result1 = num3 * num4;              //multiplication
        break;                              //break from case
        case '/':                           //Case when oper == '+'
        result1 = (num3) / (num4);          //division
        break;                              //break from case
        case '%':                           //Case when oper == '+'
        result1 = num3 % num4;              //modulus
        break;                              //break from case
        case '&':                           //Case when oper == '+'
        result1 = num3 & num4;              //AND
        break;                              //break from case
        case '|':                           //Case when oper == '+'
        result1 = num3 | num4;              //OR
        break;                              //break from case
        case '^':                           //Case when oper == '+'
        result1 = num3 ^ num4;              //XOR
        break;                              //break from case
        case '~':                           //Case when oper == '+'
        result1 = ~num3;                    //NOT
        break;                              //break from case
    }
    return result1;                         //return value to main function
}
