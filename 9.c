#include<stdio.h>
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    if(n%2==0)
    {
           printf("n is even",n);
    }
    else   
           printf("n is odd",n);
    return 0;
}