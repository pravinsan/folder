#include <stdio.h>
#include <string.h>

int main()
{
    char username[] ="pravin" ;
    char password[] ="Mypassword";
    int value;
    
    char get_user[20];
    char get_pass[20];
    printf("Enter your user name: ");
    scanf("%s",get_user);
    printf("Enter your PASSWORD: ");
    scanf("%s",get_pass);

   value = strcmp(username,get_user);
  
   if (value==0)
   {
       printf("\nValid Username");
      
   }
   else
   {
       printf("\nInvalid Username");
   }
 
   value = strcmp(password,get_pass);
  
   if (value==0)
   {
       printf("\nValid Password");
      
   }
   else
   {
       printf("\nInvalid Password");
   }
   
   
    return 0;
}
