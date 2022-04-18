#include <iostream>

int cycle(int n)
{
    int t = 1;
    while (1)
    {
        if (n == 1)
            break;
        else if (n % 2)
            n = n * 3 + 1;
        else
            n /= 2;
        t++;
    }
    return t;
}

int main()
{
    int i, j, max, temp, cy;
    while (scanf("%d %d", &i, &j) == 2)
    {
        printf("%d %d ", i, j);
        if (i > j)
        {
            temp = i;
            i = j;
            j = temp;
        }
        max = 0;
        for (i; i <= j; i++)
        {
            cy = cycle(i);
            if (cy > max)
                max = cy;
        }
        printf("%d\n", max);
    }
    return 0;
}