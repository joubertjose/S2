#include<stdio.h>
void printarray(int arr[],int size);
int sum(int arr[],int size);
int main()
{
	int size,i;
	printf("Enter size of array:");
	scanf("%d",&size);
	int arr[size];
	printf("Enter array elements:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Array elements:");
	printarray(arr,size);
	sum(arr,size);
	return 0;
}
void printarray(int arr[],int size)
{
	for(int i=0;i<size;i++)
{
printf("%d",arr[i]);
}
printf("\n");
}
int sum(int arr[],int size)
{
	int sum=0;
	for(int i=0;i<size;i++)
	{
		sum=sum+arr[i];
	}
	printf("sum=%d",sum);
	printf("\n");
}

