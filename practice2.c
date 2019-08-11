#include<stdio.h>
#include<conio.h>
int main()
{
    int a[20][20],p,i,j,s1=0,s2=0,n;
    printf("enter size");
    scanf("%d",&n);
    printf("enter eliment");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    printf("the result is");

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)

         {
             if(i==j)
             {
             s1=s1+a[i][j];
             }

             if(i+j==n-1)
             {
             s2=s2+a[i][j];
             }

}

}
             p=s1-s2;
             printf("%d\n",p);
}

