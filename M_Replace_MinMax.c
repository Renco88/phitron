#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];

    // Read the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Initialize min and max values
    int max = INT_MIN, min = INT_MAX;
    int minIndex = -1, maxIndex = -1;

    // Find min and max values along with their indices
    for (int i = 0; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            minIndex = i;
        }
        if (a[i] > max) {
            max = a[i];
            maxIndex = i;
        }
    }

    // Swap min and max values
    int temp = a[minIndex];
    a[minIndex] = a[maxIndex];
    a[maxIndex] = temp;

    // Print the modified array
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
