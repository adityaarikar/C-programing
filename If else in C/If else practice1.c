#include<stdio.h>
int main()
{
    double height;
    printf("Enter your height in inches: ");
    scanf("%lf",&height);
    double ft =height/12;

    printf("Height of a person in ft is: %lf \n",ft);
    if(ft<=4){
        printf("Person is dwarf");
    }
    else if((4<ft)&&(ft<=6)){
            printf("Person is normal");
    }
    else{
        printf("Person is tall");
    }
    return 0;
}
