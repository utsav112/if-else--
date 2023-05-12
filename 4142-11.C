#include<stdio.h>

main()

{
    int a;
    printf("enter value of a=");
    scanf("%d",&a);
    if(a==0)
    {
    printf("value is natural");
    }
    else if (a<0)
    {
    printf("value is negative");
    }
    else
    {
    printf("value is positive");
    }

    return 0;

 }
