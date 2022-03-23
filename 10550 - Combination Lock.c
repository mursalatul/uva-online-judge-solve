#include <stdio.h>

int degree(int a, int b)
{
    if (a > b) return (a - b) * 9;
    else return (40 + (a - b))  * 9;
}

int main()
{
    int a, b, c, d, total_degree;
    while (scanf("%d %d %d %d", &a, &b, &c, &d))
    {
        if (!a && !b && !c && !d) break;
        total_degree = 1080 + degree(a, b) + degree(c, b) + degree(c, d);
        printf("%d\n", total_degree);
    }
    return 0;
}