 #include <stdio.h>
int main()
{
    int n, i, t = 0;
    scanf("%d", &n);
    int l[n], r[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d%d", &l[i], &r[i]);
    }
    for (i = 0; i < n; i++)
    {
        t = 0;
        while (l[i] <= r[i])
        {
            if (l[i] % 10 == 2 || l[i] % 10 == 3 || l[i] % 10 == 9)
            {
                t++;
            }
            l[i]++;
        }
        printf("%d", t);
        printf("
");
    }
    return 0;
}