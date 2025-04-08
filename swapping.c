#include<stdio.h>
void swap(int*a,int*b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){
int num1,num2;
printf("Enter the 1st number:");
scanf("%d",&num1);
printf("Enter the 2nd number:");
scanf("%d",&num2);
printf("Before swapping\nnum1=%d\nnum2=%d\n",num1,num2);
swap(&num1,&num2);
printf("After swapping\nnum1=%d\nnum2=%d",num1,num2);
return 0;
}

