#include<stdio.h>
int main()
{
   
    float var1,var2,result;     
    printf("Enter the first number here:- ");
    scanf("%f", &var1);     

    printf("Enter the second number here:- ");
    scanf("%f", &var2);     

    result=var1*var2;
    printf("Product of two float point numbers %f and %f is :- %f", var1,var2,result);
    return 0;
}
