#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50}, x = 30, i;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(i = 0; i < n; i++)
        if(arr[i] == x) {
            printf("Found at index %d\n", i);
            return 0;
        }
    printf("Not Found\n");
    return 0;
}
