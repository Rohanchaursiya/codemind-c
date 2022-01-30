#include <stdio.h>
int main()
{
    int q, x, y, j, n = 0;
    scanf("%d%d", &x, &y);
    for (j = x; j < y; j++,x++)
    {n=0;
        while (j != 0)
        {
            q = j % 10;
            j /= 10;
            n = q + n * 10;
        }
        if (x == n)
            {printf("%d ", x);}
        j=x;
    }
    return 0;
}