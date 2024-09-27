
    #include <stdio.h>

    int main() {
        int i;
        double sum = 0, num;
        for (i = 0; i < 5; i++) {
            scanf("%lf", &num);
            sum += num;
        }
        printf("%.2lf", sum / 5);
        return 0;
    }
    