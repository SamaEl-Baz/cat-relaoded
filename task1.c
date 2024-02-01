#include<stdio.h>
int main()
{
    //1
    char name[]="Sama Mohamed Adel";
    int birthyear=2004;
    char faculty []="Engineering";
    int gradyear=2027;
    printf("my name is: %s",name);
    printf("\n my date of birth is: %d",birthyear);
    printf("\n faculty is: %s",faculty);
    printf("\n graduation year is: %d",gradyear);
    //2
    printf("\n -------------");
    printf("\n enter a random value");
    int value;
    scanf("%d",&value);
    printf("the value entered is %d",value);
    //3
      printf("\n -------------");
      printf("\n Enter dollar amount:");
      int dollaramount;
      scanf("%d",&dollaramount);
      printf("enter cents amount:");
      int centsamount;
      scanf("%d",&centsamount);
       float totalamount=dollaramount+centsamount/100;
      float tax=0.05*totalamount;
      float total=totalamount+tax;
      printf("%f",total);
      //4
       printf("\n -------------");
      int x=7;
      int y=4;
      int a=x|y;
      int b=x&y;
      int c=x^y;
      int d=x<<1;
      int e=x>>2;
      printf("\n %d \n %d \n %d \n %d \n %d",a,b,c,d,e);
      //5
       printf("\n -------------");
      int num1,num2,num3;
      printf("\n enter three numbers");
      scanf("%d",&num1);
scanf("%d",&num2);
scanf("%d",&num3);
printf("\n the numbers in order are %d %d %d",num1,num2,num3);
printf("\n the numbers in reversed order are: %d %d %d",num3,num2,num1);
//6
 printf("\n -------------");
printf("\n enter two numbers:");
int numb1,numb2;
scanf("%d",&numb1);
scanf("%d",&numb2);
printf("\nArithmetical Operations:\n");
int sum=numb1+numb2;
int sub=numb1-numb2;
int mul=numb1*numb2;
float div=(float)numb1/numb2;
printf("\n %d %d %d %f",sum, sub,mul,div);
printf("\nBitwise Operations:\n");
    printf("Bitwise AND: %d\n", numb1 & numb2);
    printf("Bitwise OR: %d\n", numb1 | numb2);
    printf("Bitwise XOR: %d\n", numb1 ^ numb2);
    printf("Bitwise NOT (first number): %d\n", ~numb1);
    printf("Bitwise NOT (second number): %d\n", ~numb2);
     printf("\nLogical Operations:\n");
    printf("AND: %d\n", numb1 && numb2);
    printf("OR: %d\n", numb1 || numb2);
    printf("NOT (first number): %d\n", !numb1);
    printf("NOT (second number): %d\n", !numb2);
return 0;
}

