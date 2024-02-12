#include<stdio.h>
int sod(int);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);;
    int s=sod(n);
   
}
int sod(int x)
{
    int sum=0;
    while(x!=0)
    {
     sum=sum+(x%10);
     x=x/10;    
    }
printf("%d is the sum of digits",sum);
}