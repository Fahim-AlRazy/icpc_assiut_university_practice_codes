#include <stdio.h>

int max_of_four(int a, int b, int c, int d) {
    int max = a; // Initialize max to the first number
    if (b > max) {
        max = b; // Update max if b is greater
    }
    if (c > max) {
        max = c; // Update max if c is greater
    }
    if (d > max) {
        max = d; // Update max if d is greater
    }
    return max; // Return the maximum value found
}


int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}