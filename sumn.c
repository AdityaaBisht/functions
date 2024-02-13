#include<stdio.h>
int sum(int);
void main()
{
 int n;
 printf("enter the value of n");
 scanf("%d",&n);
 sum(n);
}
int sum(int x)
{
    int s=0;
    for(int i=1;i<=x;i++)
    {
        s=s+i;
    }
    printf("%d is the sum of %d natural numbers",s,x);
}