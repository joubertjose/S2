#include<stdio.h>
int main()
{
	char learn[20];
	int i;
	printf("Enter the string:");
	scanf("%[^\n]",learn);
	for(i=0;learn[i]!='\0';i++)
		{
		if(learn[i]>='a'&&learn[i]<='z')
			{
			learn[i]=learn[i]-32;
			}
		else if (learn[i]>='A'&&learn[i]<='Z')
			{
			learn[i]=learn[i]+32;
			}
		}
	printf("The toggle string is: %s\n",learn);
	return 0;
}
