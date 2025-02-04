/* Name:Joubert Jose
   Date:04-02-25
   Description:Write a c program that acts as a simple calculator.The program should take 2 numbers
   and an operator(+,-,*,/,%) an input and perform the corresponding operations using a switch
   statement. If the operator is invalid,displays an error message. */
#include <stdio.h>
int main(){
	int num1,num2;
	char operator;
		printf("Enter two numbers:");
		scanf("%d%d",&num1,&num2);
		printf("1.Add \n2.Differnce\n3.Multiply\n4.Divide\n5.Modulus");
		printf("\nEnter your choice:");
		scanf(" %c",&operator);
	switch(operator){
	case'1':
		printf("%d+%d=%d",num1,num2,num1+num2);
		break;
	case'2':
		printf("%d-%d=%d",num1,num2,num1-num2);
		break;
	case'3':
		printf("%d*%d=%d",num1,num2,num1*num2);
	case'4':
	if((num1==0)||(num2==0)){
		printf("Cannot divide by zero!");
		break;
	}
	else{
	float divide=(float)num1/num2;
		printf("%d/%d=%f",num1,num2,divide);
		break;
	}
	case'5':
		printf("%d%%%d=%d",num1,num2,num1%num2);
		break;
	default:
		printf("Invalid operator");
		break;
	}
	printf("/n");
	return 0;
	}

	
