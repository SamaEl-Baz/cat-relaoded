#include<stdio.h>
int main()
{
//1
float working_hours;
printf("Enter Working Hours: \t");
scanf("%f",&working_hours);
float salary;
if(working_hours<40)
{
    salary=(working_hours*50)-(working_hours*0.1*50);
}
else
{
    salary=salary=(working_hours*50);
}
printf("salary is $%.2f\n",salary);
//2
printf("Enter a number to check if it is even or odd:\n");
int number;
scanf("%d",&number);
if(number%2==0)
{
    printf(" number is even\n");
}
else
{
    printf(" number is odd\n");
}
//3
int user_id;
printf("Enter your ID\t");
scanf("%d",&user_id);
switch(user_id)
{
    case 1234:
    printf("\n Harry");
    break;
    case 5678:
    printf("\n Ron");
    break;
    case 1145:
    printf("\n Hermione");
    break;
    default:
    printf("\n wrong ID");
    break;
}
//4
int grade;
printf("\n Enter your grade:");
scanf("%d",&grade);
 if (grade >= 90 && grade <= 100) {
        printf("Rating: Excellent\n");
    }
    else if (grade >= 80 && grade < 90) {
        printf("Rating: Very Good\n");
    }
     else if (grade >= 70 && grade < 80) {
        printf("Rating: Good\n");
    }
    else if (grade >= 60 && grade < 70) {
        printf("Rating: Satisfactory\n");
    }
    else if (grade >= 50 && grade < 60) {
        printf("Rating: Adequate\n");
    }
    else if (grade >= 0 && grade < 50) {
        printf("Rating: Fail\n");
    }
     else
    {
        printf("Invalid grade percentage\n");
    }
//5
int num1,num2,num3;
printf("Enter three numbers:\t");
scanf("%d %d %d",&num1,&num2,&num3);
int max;
if(num1>num2&&num1>num3)
{
    max=num1;
}
else if (num2>num1&&num2>num3)
{
    max=num2;
}
else
{
    max=num3;
}
printf("\n Maximum number is %d",max);
//6
printf("\n What is 3 multiplied by 4 ?");
int result;
scanf("%d",&result);
if(result==12)
{
    printf("\n Thanks");
}
else
{
    printf("\n Try Again!");
}
//7
int num;
int sum=0;
for(int i=0;i<10;i++)
{
    printf("\n Enter number:");
    scanf("%d",&num);
    sum+=num;
}
printf("\n sum is : %d",sum);
double average;
average=(double)(sum/10);
printf("\n Average is: %f",average);
//8
int num_;
printf("\n Enter an integer: ");
scanf("%d", &num_);
printf("Multiplication Table for %d:\n", num_);
for (int i = 1; i <= 10; ++i)
{
printf("%d x %d = %d\n", num_, i, num_ * i);
}
//9
int a;
printf("\n Enter a number to find its factorial:");
scanf("%d",&a);
int fact=1;
int i=1;
while(i<=a)
{
    fact=fact*i;
    i++;
}
printf("\n factorial of number is: %d",fact);
//10

    int ID=2004;
printf("\n Enter ID");
int id_userinput;
scanf("%d",&id_userinput);
int psswrd=12345;
    if(id_userinput==ID)
    {
        printf("\n Please Enter Your Password:");
        int user_psswrd ;
   scanf("%d",&user_psswrd);
    if(user_psswrd==psswrd)
    {
        printf("\nWelcome.");
    }
    else
    {
      for(int i=0;i<2;i++)
        {
        printf("\nYou are not registered,try entering your password again: ");
        scanf("%d",&user_psswrd);
        if(user_psswrd==psswrd)
        {
        printf("\nWelcome.");
        break;}
        if(i==1)
        {
            printf("\nno more tries!");
        }

    }
    }
    }
    else
    {
        printf("\nWrong ID");
    }

    //11

     printf("\nEnter number of rows:");
    int rows;
    scanf("%d",&rows);
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=2*rows-1;j++)
        {
            if(j>=rows-(i-1) && j<=rows+(i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
    }
    printf("\n");
    }
return 0;
}
