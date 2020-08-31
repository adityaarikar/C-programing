#include<stdio.h>
int main()
{
    float arr[100][100], add=0, sum[100], avg[100];
    int r,c,i,j;

    printf("Enter the number of rows and columns of array\n");
    scanf("%d%d", &r, &c);

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            printf("Enter the %d element of %d row :",j+1,i+1);
            scanf("%f",&arr[i][j]);
        }
    }

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            add = add + arr[i][j];
        }
        sum[i]=add;
        add=0;
    }
    for(i=0;i<r;i++){
        avg[i]=sum[i]/r;
    }

    printf("\nSum of all the rows in an array are :");
    for(i=0;i<r;i++){
        printf("%.2f  ",sum[i]);
    }

    printf("\n\nAverage of all the rows in an array are :");
    for(i=0;i<r;i++){
        printf("%.2f  ",avg[i]);
    }
    return 0;
}
