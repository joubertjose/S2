#include<stdio.h>
int main()
{
int n,i,max,min,index,max_index,min_index;
printf("Enter the no of elements in the array:");
scanf("%d",&n);
int a[n];
printf("Enter %d elements:",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
max=a[0];
min=a[0];
max_index=min_index=0;
for(i=1;i<n;i++)
{
if(a[i]>max)
{
max=a[i];
max_index=i;
}
if(a[i]<min)
{
min=a[i];
min_index=i;
}
}
printf("Maximum element :%d at position %d",max,max_index);
printf("Miniumum element :%d at position %d",min,min_index);
return 0;
}
