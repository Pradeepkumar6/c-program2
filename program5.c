#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],n,item,i,mid,big=0,end;
printf("enter array size");
scanf("%d",&n);
printf("enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter item");
scanf("%d",&item);
end=n-1;
while(big<=end)
{
    mid=(big+end)/2;
    if(a[mid]==item)
    {
    printf("%d",mid+1);
    break;
    }
    else
    if(a[mid]>item)
    {
    end=mid-1;
    }
    else
        big=mid+1;
}
}
