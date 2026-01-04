#include <stdio.h>
#include <string.h>


void fun_1();
void fun_2();
void fun_3();
void fun_4();
void fun_5();
void fun_6();
//-------------------------------------------
void wait_enter(){
     printf("Press enter");     
     while(getchar() != '\n');
     getchar();
}
//-------------------------------------------
void menu()
{
     char order;
     
     while(1)
     {
             system("cls");
             printf("1. +\n2. -\n3. X\n4. div\n5. mod\n6. exit\n");
             printf("Select Menu: ");
             scanf(" %c", &order); 
             switch(order)
             {
                case '1':
                     system("cls");
                     fun_1();
                     break;
                case '2':
                     system("cls");
                     fun_2();
                     break; 
                case '3':
                     system("cls");    
                     fun_3();
                     break;
                case '4':
                     system("cls");
                     fun_4();
                     break;  
                case '5':
                     system("cls");
                     fun_5();
                     break;
                case '6':
                     fun_6();
                     break;
             }
     }
}
//-------------------------------------------
void usernaem_password()
     {
     char username[20];
    char password[20];

    char correctUsername[] = "admin";
    char correctPassword[] = "abcd";

    int attempts = 3;

    while (attempts > 0) {
        printf("YOU usernamee (%d remaining): ", attempts);
        scanf("%19s", username);

        printf("Password: ");
        scanf("%19s", password);

        if (strcmp(username, correctUsername) == 0 && strcmp(password, correctPassword) == 0) {
           menu();
           return;
        } else {
            attempts--;
            printf("no\n");
            system("cls");
        }
    }             
}
//-------------------------------------------
void fun_1()
{
    int input_1, input_2;

    //--------------
    do {
    printf("number 1 (1-10): ");
    scanf("%d", &input_1);

    if (input_1 < 1 || input_1 > 10) {
        printf("");
    }
    } while (input_1 < 1 || input_1 > 10);
    //---------------
    do{
    printf("number 2 (1-10): ");
       scanf("%d", &input_2);
       if (input_2 < 1 || input_2 > 10) {
          printf("");            
       }
    }
    while (input_2 < 1 || input_2 > 10);

    printf("%d + %d = %d\n", input_1, input_2, input_1 + input_2);
    wait_enter();

}
//-------------------------------------------
void fun_2()
{
     int input_1,input_2;

     do
     {
         printf("number 1 (1-10): ");
         scanf("%d", &input_1);
         
         if(input_1 < 1 || input_1 > 10)
         {
              printf("");
         }
     }while (input_1 < 1 || input_1 > 10);
     //----------------

     do 
     {
        printf("number 2 (1-10): ");
        scanf("%d", &input_2);
        
        if(input_2 < 1 || input_2 > 10) {
                   printf("");           
        }
     }while (input_2 < 1 || input_2 > 10);
     //----------
     printf("%d - %d = %d\n", input_1, input_2, input_1 - input_2);
     wait_enter();
}
//-------------------------------------------
void fun_3()
{
     int input_1,input_2;

     do
     {
         printf("number 1 (1-10): ");
         scanf("%d", &input_1);
         
         if(input_1 < 1 || input_1 > 10)
         {
              printf("");
         }
     }while (input_1 < 1 || input_1 > 10);
     //----------------

     do 
     {
        printf("number 2 (1-10): ");
        scanf("%d", &input_2);
        
        if(input_2 < 1 || input_2 > 10) {
                   printf("");           
        }
     }while (input_2 < 1 || input_2 > 10);
     //----------
     printf("%d X %d = %d\n", input_1, input_2, input_1 * input_2);
     wait_enter();  
}
//-------------------------------------------
void fun_4()
{
     int input_1,input_2;

     do
     {
         printf("number 1 (1-10): ");
         scanf("%d", &input_1);
         
         if(input_1 < 1 || input_1 > 10)
         {
              printf("");
         }
     }while (input_1 < 1 || input_1 > 10);
     //----------------

     do 
     {
        printf("number 2 (1-10): ");
        scanf("%d", &input_2);
        
        if(input_2 < 1 || input_2 > 10) {
                   printf("");           
        }
     }while (input_2 < 1 || input_2 > 10);
     //----------
     float result_div = (float)input_1 / input_2;
     printf("%d div %d = %.2f\n", input_1, input_2, result_div);
     wait_enter(); 
}
//-------------------------------------------
void fun_5()
{
     int input_1,input_2;

     do
     {
         printf("number 1 (1-10): ");
         scanf("%d", &input_1);
         
         if(input_1 < 1 || input_1 > 10)
         {
              printf("");
         }
     }while (input_1 < 1 || input_1 > 10);
     //----------------

     do 
     {
        printf("number 2 (1-10): ");
        scanf("%d", &input_2);
        
        if(input_2 < 1 || input_2 > 10) {
                   printf("");           
        }
     }while (input_2 < 1 || input_2 > 10);
     //----------
     int result_mod = input_1 % input_2;
     printf("%d mod %d = %d\n", input_1, input_2, result_mod);
     wait_enter(); 
}
//-------------------------------------------
void fun_6()
{
    exit(0);
}
int main() {
    usernaem_password();
    getchar();
    return 0;
}
