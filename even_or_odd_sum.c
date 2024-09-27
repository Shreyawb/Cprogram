
    #include <stdio.h>

    int main() {
        int num1, num2, sum;
        scanf("%d %d", &num1, &num2);
        sum = num1 + num2;
        if (sum % 2 == 0)
            printf("Even");
        else
            printf("Odd");
        return 0;
    }
    