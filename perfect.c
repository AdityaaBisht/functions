#include<stdio.h>
int per(int);
void main()
{
  int n;
  printf("enter the value of n");
  scanf("%d",&n);
  int z=per(n);
}
int per(int x)
{
    int sum=0;
    for(int i=1;i<x;i++)
    {
        if(x%i==0 )
        sum=sum+i;
    }
    if(sum==x)
    printf("%d is  a perfect number",x);
    else
    printf("%d is not a perfect number",x);
}