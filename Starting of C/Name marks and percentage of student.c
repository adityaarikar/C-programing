#include<stdio.h>
int main()
{
    char name[20]="\0";
    int rollno,maths,phys,cemi,eng,phyedu,total;
    float percentage;
    printf("Enter your name:\n",name);
    gets(name);

    printf("Enter your roll-no: \n",rollno);
    scanf("%d",&rollno);

    printf("enter your marks of all 5 subjects (maths,physics,chemistry,english,physicaledu): \n");
    scanf("%d%d%d%d%d",&maths,&phys,&cemi,&eng,&phyedu);

    total=maths+phys+cemi+eng+phyedu;
    percentage=(total/500.0)*100;

    printf("Name of Student: %s\n",name);
    printf("Roll-No of Student: %d\n",rollno);
    printf("Total of Student: %d\n",total);
    printf("Percentage of student: %f",percentage);

    return 0;
}
