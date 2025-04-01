#include<stdio.h>
#include<string.h>
struct student
	{
	char name[50];
	int roll;
	int marks[3];
	float avg;
	}
int main()
	{
	int n,i;
	int total=0;
printf("Enter the number of students:");
scanf("%d",&n);
struct student s[n];
for(i=0;i<n;i++)
	{
	printf("\nEnter detail for students%d:\n",i+1);
	printf("Name:");
	scanf("%s",s[i].name);
	printf("Roll number:");
	scanf("%d",&s[i].roll);
	s[i].total=0;
	for(j=0;j<3;j++)
		{
		printf("Enter marks for subject%d:",j+1);
		scanf("%d",&s[i].marks[i]);
		total+=s[i].marks[i];
		}
	s[i].avg=s[i] total/3;
	printf("\nStudent Details:\n");
	for(i=0;i<n;i++)
		{
		printf("\nStudent %d\n",i+1);
		printf("Name:%d\n",s[i].name);
		printf("Roll Number:%d\n",s[i].roll);
		printf("Average Marks: %.2f\n",s[i].avg);
		}
	return 0;
	}
	}
		
		
		
		
		
		
	
	

