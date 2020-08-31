#include<stdio.h>
int main()
{
    float arr[100][100],sum=0;
    int i,j,r,c;

    printf("Enter the number of rows you want: ");
    scanf("%d",&r);
    printf("Enter the number of columns you want: ");
    scanf("%d",&c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter the %d element of %d row :",j+1,i+1);
            scanf(" %f",&arr[i][j]);
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            sum = sum + arr[i][j];
        }
    }
    printf("\nThe sum of all the elements in 2D array is : %.2f",sum);
    return 0;
}
