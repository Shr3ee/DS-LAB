#include <stdio.h>

int main() {
    int arr[100], n, i, pos, val;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter position to insert (1 to %d): ", n + 1);
    scanf("%d", &pos);
    printf("Enter value to insert: ");
    scanf("%d", &val);
    if (pos < 1 || pos > n + 1) {
        printf("Invalid position!");
        return 0;
    }
    for (i = n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i];
    arr[pos - 1] = val;
    n++;
    printf("Array after insertion: ");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
