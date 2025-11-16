#include <stdio.h>

int main() {
    int n, i;
    printf("enter array size:");
    scanf("%d", &n);

    char array[n];

    printf("enter elements of the array:");
    for (i = 0; i < n; i++) {
        scanf(" %c", &array[i]);
    }

    // reverse array (swap method)
    for (i = 0; i < n / 2; i++) {
        char temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }

    for (i = 0; i < n; i++) {
        printf("%c", array[i]);
    }

    return 0;
}
