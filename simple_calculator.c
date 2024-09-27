
    #include <stdio.h>

    int main() {
        char op;
        double num1, num2;
        scanf(" %c", &op);
        scanf("%lf %lf", &num1, &num2);
        switch (op) {
            case '+': printf("%.2lf", num1 + num2); break;
            case '-': printf("%.2lf", num1 - num2); break;
            case '*': printf("%.2lf", num1 * num2); break;
            case '/': printf("%.2lf", num1 / num2); break;
            default: printf("Invalid operation");
        }
        return 0;
    }
    