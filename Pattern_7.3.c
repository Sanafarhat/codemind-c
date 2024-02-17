#include<stdio.h>
int main()
{
    int n,i,j,p;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(p=n-1;p>=i;p--)
        {
            printf(" ");
        }
        for(j=i;j>=1;j--)
        {
            printf("%d ",j);
        }
        printf("
");
    }
}