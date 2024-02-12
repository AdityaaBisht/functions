#include<stdio.h>
int fact(int);
void main()
{
  int r,n;
  printf("enter the value of n \n");
  scanf("%d",&n);
  r=fact(n);
printf("%d",r);
}
int fact(int x)
{
    if(x==0)
    return 1;
    else 
    return x*fact(x-1);
}