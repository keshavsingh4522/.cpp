#include <stdio.h>
#include <limits.h> // For INT_MIN

int maxSubArraySum(int a[], int size) {
    int max_so_far = INT_MIN; // Use INT_MIN to handle all negative numbers
    int max_ending_here = 0;

    for (int i = 0; i < size; i++) {
        max_ending_here += a[i]; // Use shorthand += for clarity

        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here; // Update max_so_far if needed
        }

        if (max_ending_here < 0) {
            max_ending_here = 0; // Reset if negative
        }
    }
    return max_so_far; // Return the maximum sum found
}

int main() {
    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the number of elements
    int max_sum = maxSubArraySum(a, n);
    printf("Maximum contiguous sum is %d\n", max_sum); // Added newline for better output formatting
    return 0;
}
