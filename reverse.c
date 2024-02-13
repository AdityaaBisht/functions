#include<stdio.h>
int rev(int);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    rev(n);
}
int rev(int x)
{
    int r,rev=0;
    int num=x;
    while(x!=0)
    {
        r=x%10;
        rev=rev*10+r;
        x=x/10;
    }
    printf("%d is the reverse of %d ",rev,num);
}