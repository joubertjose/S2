#include<stdio.h>
void pdm(int);
int main()
{
int x;
printf("Enter the number:");
scanf("%d",&x);
pdm(x);
return 0;
}

void pdm(int a)
	{
	int rev=0,rm,num;
	num=a;
	while(a>0)
		{
		rm=a%10;
		rev=rev*10+rm;
		a=a/10;
		}
	if(num==rev)
		{
		printf("The given number is pallindrome");
		}
	else
		{
		printf("Not a pallindrome");
		}
	}
