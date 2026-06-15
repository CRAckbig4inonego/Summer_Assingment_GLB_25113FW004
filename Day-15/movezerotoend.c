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
int j = 0;
for(int i = 0; i < n; i++) {
    if(arr[i] != 0) {
        arr[j++] = arr[i];
    }
}
while(j < n) {
    arr[j++] = 0;
}
printf("Array after moving zeroes to end:\n");
for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
    }

    return 0;
}