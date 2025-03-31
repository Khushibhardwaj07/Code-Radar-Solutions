// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int allSame = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[0]) {
            allSame = 0;
            break;
        }
    }
    
    if (allSame) {
        printf("-1");
    } else {
        int minValue = arr[n-2]; 
        for (int i = n - 3; i >= 0; i--) {
            if (arr[i] != arr[n-1]) {
                minValue = arr[i];
                break;
            }
        }
        printf("%d", minValue);
    }

    return 0;
}