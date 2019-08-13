#include<stdio.h>
int main()
{
int a[20],i,n,j,temp;
printf("enter array size");
scanf("%d",&n);
printf("enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
for(i=0;i<n;i++)
{
    for(j=0;j<n-i;j++)
    {
    if(a[j]>a[j+1])
    {
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
    }
}
}
for(i=0;i<n;i++)
printf("%d\n",a[i]);
}
