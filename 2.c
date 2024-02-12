#include<stdio.h>
int swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main()
{
    int x=6;
    int y =8;
    swap(&x,&y);
    printf("%d %d",x,y);
    return 0;
}
