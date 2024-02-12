#include<stdio.h>
 int Get_Max(int a,int b)
    { int max=0;
        if(a>b)
            max=a;
        else
            max=b;
            return max;
    }
int main()
{ int num1,num2,max;
printf("Enter two numbers: ");
scanf("%d %d",&num1,&num2);
   max=Get_Max(num1,num2);
   printf("Max is %d",max);
return 0;

}
