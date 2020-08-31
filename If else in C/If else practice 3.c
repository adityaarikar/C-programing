#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the sides of triangle: \n");
    scanf("%d%d%d",&a,&b,&c);

   if((a==b)&&(b==c)){
        printf("The triangle is Equilateral.");
   }
   else if((a==b)||(b==c)||(a==c)){
         printf("The triangle is Isosceles.");
   }
   else{
     printf("The triangle scalene.");
   }
   return 0;
}
