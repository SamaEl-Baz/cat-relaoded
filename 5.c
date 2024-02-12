#include<stdio.h>
int fib(int a)
{
    if(a<=1)
    {
        return a;
    }
    else
    {

        return fib(a-1)+fib(a-2);
    }
}
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int res;
    res=fib(n);
    printf("fibonacci of %d is %d",n,res);
return 0;
}
