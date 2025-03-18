/*
WAP to find the average of the set of nos in an array.
*/
#include<stdio.h>
int main()
{
	int a[20],i,n,avg,sum=0;
	printf("Enter the no of elements");
	scanf("%d",&n);
	printf("Enter the elements");
	for(i=0;i<n;i++)
		{
		scanf("%d",&a[i]);
		}
	for(i=0;i<n;i++)
		{		
		sum+=a[i];
		}
		avg=sum/n;
		printf("The average is %d",avg);
return 0;
}
