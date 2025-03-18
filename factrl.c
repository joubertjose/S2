#include<stdio.h>
int factorial()
{
int number,i=1,fact=1;
	printf("Enter a number:");
	scanf("%d",&number);
	if(number>0){
		while (i<=number){
			fact=fact*i;
			i=i+1;}
	printf("The factorial of %d is %d\n",number,fact);
	}
	else{
		printf("Number cannot be negative!!\n");
	}
	return 0;
}
int main(){
	factorial();
	return 0;
	}
