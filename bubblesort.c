#include<stdio.h>
void main()
{
int a[5],n,i,j,temp;
printf("enter the limit \n");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("enter the element");
scanf("%d",&a[i]);

}
for(i=0;i<n-1;i++)
{
for(j=0;j<(n-i-1);j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("sorted array is \n");
for(i=0;i<n;i++)
{
printf("%d \n",a[i]);
}
}
