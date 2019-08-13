#include<stdio.h>
int main()
{
int a[20],i,n,j,temp,min;
printf("enter array size");
scanf("%d",&n);
printf("enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
    min=i;
    if(a[j]<a[min])
    {
    min=j;
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }
}
}
for(i=0;i<n;i++)
printf("%d\t",a[i]);
}

