#include<stdio.h>
int main()
{
    int arr[100],arreven[100],arrodd[100],i,n;
    int k=0,j=0;

    printf("Enter the number of elements you want to store in array :\n");
    scanf("%d",&n);

    printf("Enter the element you want to store in array :\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            arreven[j]= arr[i];
            j++;
        }
        else
        {
            arrodd[k]= arr[i];
            k++;
        }
    }
    printf("The even elements in array are :");
    for(i=0;i<j;i++)
    {
        printf("%d  ",arreven[i]);
    }
    printf("\nThe odd elements in array are :");
    for(i=0;i<k;i++)
    {
        printf("%d  ",arrodd[i]);
    }
    return 0;
}
