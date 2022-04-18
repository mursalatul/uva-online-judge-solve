#include <stdio.h>
#include <stdlib.h>


void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

int main()
{
    int n, s, d, x, y;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d %d", &s, &d);
        if (s >= d)
        {
            x = s + d;
            y = abs(s - d);
            if (x % 2 == 0 && y % 2 == 0)
            {
                x /= 2;
                y /= 2;
                if (x < y)
                {
                    swap(&x, &y);
                }
                printf("%d %d\n", x, y);
            }
            else
            {
                printf("impossible\n");
            }
        }
        else
        {
            printf("impossible\n");
        }
    }
    return 0;
}