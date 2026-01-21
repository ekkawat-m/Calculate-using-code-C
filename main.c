#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>


int in(char *m){
    int n;
    do{ printf("%s(1-10): ",m); scanf("%d",&n); }
    while(n<1||n>10);
    return n;
}

void calc(char o){
     system("cls");
    int a=in("A "),b=in("B ");
    printf(o=='+'?"%d+%d=%d":
           o=='-'?"%d-%d=%d":
           o=='*'?"%dX%d=%d":
           o=='/'?"%d/%d=%.2f":"%d%%%d=%d",
           a,b,o=='/'?(float)a/b:o=='%'?a%b:
           o=='+'?a+b:o=='-'?a-b:a*b);
        printf("\nEnter...");
        getchar();
        getchar();
}

int main(){
    int t;
    char p[20],c,op[]="+-*%/";
    for(t = 4;t--;){
        printf("Password (%d): ",t+1);
        scanf("%s",p);
        if(!strcmp(p,"12345")) break;
        system("cls");
        if(!t) return 0;
    }
    while(1){
             int c;
             system("cls");
             printf("1.+ 2.- 3.X 4.div 5.mod 6.exit\nSelect: ");
             scanf("%d",&c);

             if (c == 6) {
                system("cls");
                printf("Bye Bye...\n");
                Sleep(2000);
                exit(0);
            }

             if(c>=1 && c<=5) calc(op[c-1]);
    }
}
