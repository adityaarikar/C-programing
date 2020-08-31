#include<stdio.h>

int main()
{
    float a[10][10], b[10][10], add[10][10], multiply[10][10], sum=0;
    int r1,r2,c1,c2,i,j,k;

    printf("Enter the number of rows and columns of first matrix\n");
    scanf("%d%d", &r1, &c1);

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("Enter the %d element of %d row :",j+1,i+1);
            scanf("%f",&a[i][j]);
        }
    }

    printf("\nEnter the number of rows and columns of second matrix\n");
    scanf("%d%d", &r2, &c2);

    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("Enter the %d element of %d row :",j+1,i+1);
            scanf("%f",&b[i][j]);
        }
    }

    if(r1!=r2 && c1!=c2)
    {
        printf("Addition of the matrices is not possible...");
    }
    else
    {
        for (i = 0; i < r1; ++i)
            for (j = 0; j < c1; ++j)
            {
                add[i][j] = a[i][j] + b[i][j];
            }
        printf("\nSum Of Matrix:\n");

        for (int i = 0; i < r1; ++i)
            for (int j = 0; j < c1; ++j)
            {
                printf("%.1f\t", add[i][j]);

                if (j == c1-1)
                    printf("\n");
            }
    }

    if(c1!=r2)
    {
        printf("\nThe matrix multiplication is not possible...");
    }
    else
    {
        for(i=0; i<r1; i++)
        {
            for(j=0; j<c2; j++)
            {
                for(k=0; k<r2; k++)
                {
                    sum += a[i][k] * b[k][j];
                }
                multiply[i][j] = sum;
                sum=0;
            }
        }

        printf("Resultant matrix after multiplying A and B\n");
        for (i = 0; i < r1; ++i)
            for (j = 0; j < c1; ++j)
            {
                printf("%.1f\t", multiply[i][j]);

                if (j == c1-1)
                    printf("\n");
            }
    }
    return 0;
}
