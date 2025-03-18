/*
WAP to find all factors of a given integer using while loop.
*/
#include<stdio.h>
int main()
{
int i=1,n;
printf("Enter the number");
scanf("%d",&n);
while(i<=n)
	{
	if(n%i==0)
		{
		printf("%d is a factor of %d\n",i,n);
	}
	i++;
	}
return 0;
}
