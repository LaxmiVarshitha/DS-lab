#include<stdio.h>
void main()
{
int a[100],i,pos,item,n;
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

printf("enter the pos"); 
scanf("%d",&pos);

for(i=pos;i<=n-1;i++)

a[i]=a[i+1];
n=n-1;


for(i=0;i<=n-1;i++)
{
printf("%d\n",a[i]);
}
return ;
}
