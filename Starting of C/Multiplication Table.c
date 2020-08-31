//Question no.7
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the integer ");
    scanf("%d",&n);
    printf("The multiplication table of %d is \n",n);
    for(i=1;i<=10;i++)
    {
        printf("%d X %d = %d \n",n,i,n*i);
    }
    return 0;
}
