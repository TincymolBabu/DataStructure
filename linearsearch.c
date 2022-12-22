#include<stdio.h>
void main()
{
int a[6],i,n,key,f=0;
printf("enter the limit \n");
scanf("%d",&n);
printf("enter the element");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the key");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
f=1;
break;
}
}
if(f==1)
{
printf("element is found");
}
else
{
printf("element is not found");
}
}

