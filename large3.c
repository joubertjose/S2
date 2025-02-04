/* Name:Joubert Jose
   Date:04-02-25
   Description:Write a program to find the largest of three numbers.
   Using nested if statements.Display appropriate message for each scenario. */
#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter the numbers:");
scanf("%d%d%d",&a,&b,&c);
if(a>c)
{
if(a<b)
{
printf("%d is the largest number",a);
}
else{
if(b>a)
{
printf("%d is the largest number",b);
}
}
}
else
{
printf("%d is the largest number",c);
}



return 0;
}
