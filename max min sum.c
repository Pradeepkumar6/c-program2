#include<stdio.h>
#include<conio.h>
int main()
{
    int a[200],temp,i,j,s1=0,s2=0,n;
    printf("enter size");
    scanf("%d",&n);
    printf("enter eliment");
    for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n-i;j++)
{
if(a[i]>a[j])
{
   temp=a[j];
   a[j]=a[j+1];
    a[j+1]=temp;
}
}
}
for(i=1;i<n;i++)
{
   s1=s1+a[i];
    }

    for(i=0;i<n-1;i++)
{
   s2=s2+a[i];
}
printf("%d\t%d",s1,s2);
}
