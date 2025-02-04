#include<stdio.h>
int main()
{
int a,b,temp;
a=4;
b=3;
printf("a=%d and b=%d",a,b);
temp=a;
a=b;
b=temp;
printf("After swapping a=%d,b=%d\n",a,b);
return 0;
}
