#include<stdio.h>
struct s1
{
char name[50];
int roll_no;
float height;
}a;
union s2
{
char name[50];
int roll_no;
float height;
}b;
int main()
{
printf("size of a:%ld\n",sizeof(a));
printf("size of b:%ld\n",sizeof(b));
return 0;
}
