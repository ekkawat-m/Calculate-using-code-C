#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int input(char *m) {
    int n;
    do{
       printf("%s (1-10): ",m); scanf("%d", &n);    
    }while(n<1||n>10);
    return n;
}

void waitEnter() {
     printf("\nEnter...");
     while(getchar() != '\n');
     getchar();     
}

void calc(char o){
     int a,b;
     system("cls");
     a=input("input A :");
     b=input("input b :");
     if (o == '+'){
        printf("%d + %d = %d", a,b,a+b);      
     }
     else if(o == '-'){
            printf("%d - %d = %d", a,b,a-b);       
     }
     else if(o == '*') {
          printf("%d X %d = %d", a,b,a*b);     
     }
     else if(o == '/') {
          printf("%d div %d = %d", a, b, a/b);     
     }
     else if(o == '%'){
          printf("%d mod %d = %d", a, b, a%b);     
     }
     
     waitEnter();
}

int main(){
    int t,m;
    char pass[20], ops[]="+-*/%";
    
    for(t=4;t--;){
       printf("Passworld(%d): ", t+1);
       scanf("%s",pass);
       if(!strcmp(pass,"12345")){
          break;
       }
       system("cls");
       if(!t){
          return 0;       
       }
    }
    
    while(1){
       system("cls");
       printf("1.+\n2.-\n3.X\n4.div\n5.mod\n6.exit\n");
       printf("select : ");
       scanf("%d",&m);
       
       if(m==6){
          system("cls");
          printf("Bey Bey...");
          Sleep(1000);
          break;
       }        
       if(m>= 1 && m<=5) calc(ops[m-1]);
    }
    return 0;
}
