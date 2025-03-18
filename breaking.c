/*
WAP to count from 1-10 but stop printing when the number is 5.
*/
#include<stdio.h>
int main()
{
int i;
for(i=1;i<=10;i++)
	{
	if(i==5)
		{
		break;
		}
	printf("%d",i);
	}
return 0;
}
