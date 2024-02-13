#include<stdio.h>
int fact(int);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    fact(n);
}
int fact(int x)
{
    for(int i=1;i<=x;i++)
    {
        if(x%i==0)
        {
            printf("%d is the factor of  %d\n",i,x);

        }
    }
}
