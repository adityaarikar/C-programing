//Question no.3
#include<stdio.h>
int main()
{
    int num1,num2,quot,rem;

    printf("Enter tne divident: ");
    scanf("%d", &num1);

    printf("Enter tne divisor: ");
    scanf("%d", &num2);

    quot= num1/num2;
    rem= num1%num2;

    printf("Quotient is: %d\n",quot);
    printf("Reminder is: %d",rem);

    return 0;
}
