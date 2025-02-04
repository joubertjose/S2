#include<stdio.h>
int main()
{
int roll_no,age;
printf("Enter the roll no");
scanf("%d",&roll_no);
printf("Enter the age");
scanf("%d",&age);
printf("The roll no is %d\n,",roll_no);
printf("The age is %d years\n,",age);
float height;
char grade;
printf("height:");
scanf("%f",&height);
printf("grade:");
scanf(" %c",&grade);
printf("height is %f cm\n",height);
printf("grade is %c\n",grade);
return 0;
}
