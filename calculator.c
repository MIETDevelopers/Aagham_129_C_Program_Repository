#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):");//printing the operator to be entered by the user.
    scanf("%c", &operator);//scanning the operator.
    printf("Enter two operands:");//printing the number to enter by the user.
    scanf("%lf %lf",&a, &b);//scanning the number.
    switch(operator)
    {
        case '+':
            printf("%.lf + %.lf = %.lf",a, b, a+b);//addition function.
            break;

        case '-':
            printf("%.lf - %.lf = %.lf",a, b, a-b);//subtraction function.
            break;

        case '*':
            printf("%.lf * %.lf = %.lf",a, b, a*b);//multiplication function.
            break;

        case '/':
            printf("%.lf / %.lf = %.lf",a, b, a/b);//division function.
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}