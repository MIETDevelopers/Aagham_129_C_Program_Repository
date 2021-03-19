#include<stdio.h>
int main()
{
    int a, s;//declaration.
    printf("Enter value of a: ");
    scanf("%d",&a);//scanning number entered by user.
    s = 0;//initialization.
    while(a > 0)//while loop.
    {
        s = s + (a%10);
        a = a / 10;
        //formula to calculate sum of digit.
    }
    printf("Sum of digits: %d",s);//output
    return 0;
}
