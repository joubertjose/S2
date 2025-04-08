#include<stdio.h>
int main()
{
int a;
int *p,**q;
printf("Enter the number:");
scanf("%d",&a);
p=&a;
q=&p;
printf("Before\n");
printf("Value of a is %d\n",a);
printf("Value of *p is %d\n",*p);
printf("Value of **q is %d\n",**q);
printf("After\n");
**q+=5;
printf("Value of a is %d\n",a);
printf("Value of *p is %d\n",*p);
printf("Value of **q is %d\n",**q);
return 0;
}

