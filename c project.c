#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
struct user_details
{
     char bank_name[30];
     char user_name[30];
     int acc_number;
     char user_address[100];
     float available_balance;     
};
struct user_details user[20];
int num_acc;
void Create_new_account();
void Cash_Deposit();
void Cash_withdrawl();
void Log_out();
int main()
{
    char option;
    num_acc=0;
    while(1)
    {
       printf("\n\n\n\n\n       ***** WELCOME TO BANK APPLICATION *****    \n");
       printf("enter any options (1/2/3/4):");
        option = getch();
        printf("%c\n", option);
        switch(option)
        {
          case '1': Create_new_account();
                    break;
          case '2': Cash_Deposit();
                    break;
          case '3': Cash_withdrawl();
                    break;
          case '4': return 0;
          default : printf("please enter the following options to continue(1/2/3/4)");
                    break;
        }
    }
} 
void display_options()
{
    printf("\n1. Create new account \n");
    printf("2. Cash Deposit \n");
    printf("3. Cash withdrawl \n");
    printf("4. Log out \n");
}
void Create_new_account()
{
   char bank_name[20];
   char user_name[30];
   int acc_number;
   char user_address[100];
   float available_balance = 0;    
   printf("\nEnter the bank name              : ");
   scanf("%s", &bank_name);
   printf("\nEnter the user name              : ");
   scanf("%s", &user_name);
   printf("\nEnter the account number(1 to 10): ");
   scanf("%d", &acc_number);
   printf("\nEnter the user address           : ");
   scanf("%s", &user_address);
 
   strcpy(user[acc_number-1].bank_name,bank_name);
   strcpy(user[acc_number-1].user_name,user_name);
   user[acc_number-1].acc_number=acc_number;
   strcpy(user[acc_number-1].user_address,user_address);
   user[acc_number-1].available_balance=available_balance;
 
   printf("\nACCOUNT HAS BEEN CREATED SUCCESSFULLY............ \n\n");
   printf("Bank name              : %s \n" , 
   user[acc_number-1].bank_name);
   printf("Account user name      : %s \n" , 
   user[acc_number-1].user_name);
   printf("Account number         : %d \n" , 
   user[acc_number-1].acc_number);
   printf("user address           : %s \n" , 
   user[acc_number-1].user_address);
   printf("Available balance      : %f \n" , 
   user[acc_number-1].available_balance);
}
void Account_information()
{
     register int num_acc = 0;
     while(strlen(user[num_acc].bank_name)>0)
     {
         printf("\nBank name                : %s \n" , 
         user[num_acc].bank_name);
         printf("Account user name          : %s \n" , 
         user[num_acc].user_name);
         printf("Account number             : %d \n" , 
         user[num_acc].acc_number);
         printf("user address               : %s \n" , 
         user[num_acc].user_address);
         printf("Available balance          : %f \n\n" , 
         user[num_acc].available_balance);
         num_acc++;
     }
}
void Cash_Deposit()
{
   auto int acc_no;
   float add_money;
   printf("Enter account number you want to deposit money:");
   scanf("%d",&acc_no);
   printf("\nThe current balance for account %d is %f \n:", 
   acc_no, user[acc_no-1].available_balance);
   printf("\nEnter money you want to deposit :  ");
   scanf("%f",&add_money);
   while (acc_no=user[acc_no-1].acc_number)
   {
         user[acc_no-1].available_balance=
         user[acc_no-1].available_balance+add_money;
         printf("\nThe New balance for account %d is %f \n:", 
         acc_no, user[acc_no-1].available_balance);
         break; 
   }acc_no++;
}
void Cash_withdrawl()
{
   auto int acc_no;
   float withdraw_money;
   printf("Enter account number you want to withdraw money:");
   scanf("%d",&acc_no);
   printf("\nThe current balance for account %d is %f \n:", 
   acc_no, user[acc_no-1].available_balance);
   printf("\nEnter money you want to withdraw from account: ");
   scanf("%f",&withdraw_money);
   while (acc_no=user[acc_no-1].acc_number)
   {
         user[acc_no-1].available_balance=
         user[acc_no-1].available_balance-withdraw_money;
         printf("\nThe New balance for account %d is %f \n:", 
         acc_no, user[acc_no-1].available_balance);
         break; 
   }acc_no++;
}
