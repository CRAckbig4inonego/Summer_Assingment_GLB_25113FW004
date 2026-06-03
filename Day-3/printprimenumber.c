#include <stdio.h>

int main() {
    int n;
    printf("How many prime numbers to print: ");
    scanf("%d", &n);

    int count = 0, num = 2;

    while (count < n) {
        int isPrime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime) {
            printf("%d ", num);
            count++;
        }

        num++;
    }

    return 0;
}