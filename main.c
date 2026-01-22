#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int input(char *m){
    int n;
    do{
       printf("input %s (1-10)", m);
       scanf("%d", &n);    
    }while(n < 1 || n > 10);
    return n;;
}

void enter(){
     printf("\nEnter...");
     while(getchar() != '\n');
     getchar();     
}

void clec(int mc){
     int a,b,te;
     system("cls");
     a = input("1");
     b = input("2");
     
     if(mc == 2 || mc == 4 || mc == 5) {
           if(a<b){
                   te = a;
                   a = b;
                   b = te;       
           }      
     }    
     if(mc == 1){
           printf("%d + %d = %d",a,b,a+b);
     }
     else if(mc == 2){
          printf("%d - %d = %d",a,b,a-b);     
     }
     else if(mc == 3){
          printf("%d X %d = %d",a,b,a*b);     
     }
     else if(mc == 4){
          printf("%d div %d = %d",a,b,a/b);     
     }
     else if(mc == 5){
          printf("%d mod %d = %d",a,b,a%b);     
     }
     enter();
}

int main(int argc, char *argv[])
{
   int t,m;
   char pass[20];
   
   for(t=4;t--;){
       printf("Passworld? (%d) : ",t+1);     
       scanf("%s", pass);
       if(strcmp(pass, "12345") == 0){
            break;                
       }
       if(!t){
              return;       
       }   
   }
   while(1){
            system("cls");
            printf("1.+\n2.-\n3.X\n4.div\n5.mod\n6.exit\n");
            printf("Select : ");
            scanf("%d" ,&m);
            if(m == 6){
                 system("cls");
                 printf("Bey Bey...");     
                 sleep(1000);
                 break;
            }
            if(m >= 1 && m <= 5){
                 clec(m);     
            }
   }
   return 0;
}
