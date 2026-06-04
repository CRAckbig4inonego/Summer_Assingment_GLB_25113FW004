#include <stdio.h>
#include <math.h>

int main() {
    
    printf("Enter number till you want to pritn armstrong number : ");
    int  end;
    scanf("%d", &end);

    for (int num = 1; num <= end; num++) {
        int temp = num, digits = 0;
        int sum = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = num;

      
        while (temp > 0) {
            int rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        if (sum == num) {
            printf("%d ", num);
        }
    }

    return 0;
}