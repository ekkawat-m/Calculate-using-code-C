#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int input_number(char *msg) {
    int n;
    do {
        printf("%s (1-10): ", msg);
        scanf("%d", &n);
    } while (n < 1 || n > 10);
    return n;
}

void wait_enter() {
    printf("Press Enter...");
    getchar();
    getchar();
}

void calculator(char op) {
    int a = input_number("number 1");
    int b = input_number("number 2");

    switch (op) {
        case '+': printf("%d + %d = %d\n", a, b, a + b); break;
        case '-': printf("%d - %d = %d\n", a, b, a - b); break;
        case '*': printf("%d X %d = %d\n", a, b, a * b); break;
        case '/': printf("%d div %d = %.2f\n", a, b, (float)a / b); break;
        case '%': printf("%d mod %d = %d\n", a, b, a % b); break;
    }
    wait_enter();
}

void menu() {
    char c;
    while (1) {
        system("cls");
        printf("1.+  2.-  3.X  4.div  5.mod  6.exit\n");
        printf("Select: ");
        scanf(" %c", &c);

        if (c == '6') exit(0);

        char ops[] = {'+', '-', '*', '/', '%'};
        if (c >= '1' && c <= '5')
            calculator(ops[c - '1']);
    }
}

void username_password() {
    char u[20], p[20];
    int tries = 3;

    while (tries--) {
        printf("Password (%d left): ", tries +1);
        scanf("%s", p);

        if (!strcmp(p, "12345")) {
            menu();
            return;
        }
        system("cls");
    }
}

int main() {
    username_password();
    return 0;
}
