//Question no.6
#include<stdio.h>
void main()
{
    int num,reverse =0;
    printf("Enter the 3 digit number :");
    scanf("%d", &num);
    printf("The entered number is : %d\n",num);

   while(num!=0){
    reverse =reverse*10;
    reverse= reverse+num%10;
    num=num/10;
   }

    printf("The reverse of three digit %d is: %d",num,reverse);
    return 0;
}
