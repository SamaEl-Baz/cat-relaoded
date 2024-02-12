#include<stdio.h>
int login(char username[100],char password[100])
{
  char name[]="samaelbaz";
  char word[]="mercedesbenz";
  if(strcmp(username,name)==0 && strcmp(password,word)==0)
  {
      return 1;
  }
  else
  {
      return 0;
  }
}
int main()
{
    char username[100];
    char password[100];
    printf("Enter user name: ");
    scanf("%s",&username);
     printf("\nEnter password: ");
    scanf("%s",&password);
    int res=login(username,password);
    if(res==1)
        printf("successful login");
    else
        printf("failed to login");

}
