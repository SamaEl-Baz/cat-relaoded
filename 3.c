#include<stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d",&x);
 int count=0;
 while(x!=0)
 {
x=x/10;
count++;
}
printf("\nThe number is %d  digits.",count);
}
