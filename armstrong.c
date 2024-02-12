#include<stdio.h>
int arm(int);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int z=arm(n);
}
  int arm(int x)
  {
    int sum=0;
    int r,num=x;
    while(x!=0)
    {
        r=x%10;
        sum=sum+r*r*r;
        x=x/10;
    }
    if(sum==num)
    printf("%d is armstrong",num);
    
}