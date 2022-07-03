#include <stdio.h>
int main()
{
    int a, i = 0, j, k, m = 0;
    scanf("%d", &a);
    int n[a];
    for (i = 0; i < a; i++)
    {
        scanf("%d", &n[i]);
    }
    i=0;
    while (i < a)
    {
        k = 0;
        for (j = 0; j < a; j++)
        {
            if (n[i] == n[j])
                k++;
        }
        if (k == 1)
        {
            printf("%d",n[i]);
        }
        i++;
    }
    return 0;
}