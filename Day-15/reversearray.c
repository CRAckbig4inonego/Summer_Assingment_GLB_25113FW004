#include <stdio.h>
int main() {
printf("Enter size: ");
int n;
scanf("%d", &n);
int arr[n];
printf("Enter elements:\n");
for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
}

printf("Reversed Array: ");
for(int i = n - 1; i >= 0; i--) {
printf("%d ", arr[i]);
}

    return 0;
}