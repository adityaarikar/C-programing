#include <stdio.h>
int main()
{
  float r, c, a[10][10], b[10][10], result[10][10];

  printf("Enter the number of rows:");
  scanf("%f",&r);
  printf("Enter the number of columns:");
  scanf("%f", &c );


  printf("Enter elements of 1st matrix\n");
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      printf("Enter a%d%d: ", i + 1, j + 1);
      scanf("%f", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix\n");
  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      printf("Enter b%d%d: ", i + 1, j + 1);
      scanf("%f", &b[i][j]);
    }


  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      result[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSum Of Matrix:\n");

  for (int i = 0; i < r; ++i)
    for (int j = 0; j < c; ++j)
    {
      printf("%.1f\t", result[i][j]);

      if (j == c-1)
        printf("\n");
    }
  return 0;
}
