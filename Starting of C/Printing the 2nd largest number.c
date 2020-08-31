//Question no.1
#include<stdio.h>
int main()
{
    int i,j,k;
    printf("Enter the three numbers :");
    scanf("%d%d%d", &i,&j,&k);

    if(i>j && i>k)
    {
        if(j>k)
        {
            printf("The second largest number is %d",j);
        }
        else
        {
            printf("The second largest number is %d",k);
        }
    }
    else if(j>k && j>i)
    {
        if(k>i)
        {
            printf("The second largest number is %d",k);
        }
        else
        {
            printf("The second largest number is %d",i);
        }
    }
    else(k>i && k>j);
    {
        if(i>j)
        {
            printf("The second largest number is %d",i);
        }
        else
        {
            printf("The second largest number is %d",j);
        }
    }
    return 0;
}
