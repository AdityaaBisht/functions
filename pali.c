#include<stdio.h>
int pali(int);
void main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int p=pali(n);
}
int pali(int x)
{

    int rev=0,r,num=x;
    while(x!=0)
    {
       r=x%10;
       rev=rev*10+r;
       x=x/10;
    }
    if(rev==num)
    printf("%d is a palinfrome number",num);
    else
    printf("%d is not a palindrome number",num);
}