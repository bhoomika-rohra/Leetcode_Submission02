#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];

    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    int j = 1;

    for (int i = 1; i < n; i++) {
        if (nums[i] != nums[j - 1]) {
            nums[j] = nums[i];
            j++;
        }
    }

    printf("Number of unique elements: %d\n", j);

    printf("Array with unique elements:\n");
    for (int i = 0; i < j; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}

