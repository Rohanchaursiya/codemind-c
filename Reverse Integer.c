#include <stdio.h>
int main() {
    int n, s = 0, remainder;
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        s = s * 10 + remainder;
        n /= 10;
    }
    printf("%d",s);
    return 0;
}