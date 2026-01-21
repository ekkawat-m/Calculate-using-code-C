#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int input(char *m){
    int n;
    do{ printf("%s (1-10): ",m); scanf("%d",&n); }
    while(n<1||n>10);
    return n;
}

void waitEnter(){
    printf("\nPress Enter...");
    while(getchar()!='\n');
    getchar();
}

void calc(char o){
    int a,b;
    system("cls");
    a=input("A"); 
    b=input("B");

    if (o == '+') {
       printf("%d + %d = %d\n", a, b, a + b);
       }
    else if (o == '-') {
       printf("%d - %d = %d\n", a, b, a - b);
    }
    else if (o == '*') {
         printf("%d X %d = %d\n", a, b, a * b);
    }
    else if (o == '/') {
         printf("%d / %d = %.2f\n", a, b, (float)a / b);
    }
    else if (o == '%') {
         printf("%d mod %d = %d\n", a, b, a % b);
    }
    else {
         printf("Invalid operator\n");
    }


    waitEnter();
}

int main(){
    int t,m;
    char pass[20], ops[]="+-*/%";

    for(t=4;t--;){
        printf("Password (%d): ",t+1);
        scanf("%s",pass);
        if(!strcmp(pass,"12345")) break;
        system("cls");
        if(!t) return 0;
    }

    while(1){
        system("cls");
        printf("1.+ 2.- 3.X 4.div 5.mod 6.exit\nSelect: ");
        scanf("%d",&m);

        if(m==6){
            system("cls");
            printf("Bye Bye...\n");
            Sleep(2000);
            break;
        }
        if(m>=1 && m<=5) calc(ops[m-1]);
    }
    return 0;
}
