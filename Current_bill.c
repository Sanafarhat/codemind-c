#include<stdio.h>
int main()
{
    int u;
    float uc,b,sc,tb;
    scanf("%d",&u);
    if(u<199)
    {
        uc=1.20;
    }
    else if(u>=200 && u<400)
    {
        uc=1.50;
    }
    else if(u>=600)
    {
        uc=2.00;
    }
    if(u>400)
    {
        b=u*uc;
        sc=b*0.15;
        tb=b+sc;
        printf("%.2f",tb);
    }
    else
    {
        b=u*uc;
        sc=100.0;
        tb=b+sc;
        printf("%.2f",tb);
    }
}