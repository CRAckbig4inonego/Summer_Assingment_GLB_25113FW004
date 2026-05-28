#include<stdio.h>

int main() {
    printf("Enter number: ");

    int num;
    scanf("%d", &num);

    int sum = 0;
    int reminder;
    int count = 0;

    for (; num > 0; ) {
        reminder = num % 10;
        sum += reminder;
        num /= 10;
        count++;
    }

    printf("Count = %d", count);

    return 0;
}