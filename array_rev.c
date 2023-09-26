#include<stdio.h>
void main()
{
int a[100],i,n;
printf("enter the num");
scanf("%d",&n);

printf("enter the array");
for(i=0;i<=n-1;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}

printf("the reverse order:");

for(i=n;i>=0;i--)
{
printf("%d\n",a[i]);
}
return ;
}
