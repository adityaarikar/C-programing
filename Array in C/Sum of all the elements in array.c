#include<stdio.h>
int main()
{
    int n,i;
    float arr[50],sum=0;
    printf("Enter the number of elements in array : ");
    scanf("%d",&n);

    for( i=0; i<n; i++)
    {
        printf("Enter the elements of array : ");
        scanf("%f",&arr[i]);
    }
    for( i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    printf("\nThe sum of all the elements in array is %.2f",sum);
    return 0;
}
