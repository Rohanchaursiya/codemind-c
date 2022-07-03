#include <stdio.h>
int rev(int n)
{
    int d = 0;
    while (n)
    {
        d = d * 10 + n % 10;
        n /= 10;
    }
    return d;
}
int main()
{
    int n, d = 0, i, c = 0;
    scanf("%d", &n);
    n = rev(n);
    while (n)
    {
        i = n % 10;
        if (c == 0)
        {
            if (i == 6)
            {
                i = 9;
                c = 1;
            }
        }
        d = d * 10 + i;
        n /= 10;
    }
    printf("%d", d);
    return 0;
}