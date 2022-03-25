#include <stdio.h>

int main()
{
    long int t, n, i = 1, j,input, maxi;
    scanf("%ld", &t);
    while (t--)
    {
        scanf("%ld", &n);
        maxi = 0;
        for (j = 0; j < n; j++)
        {
            scanf("%ld", &input);
            if (input > maxi) maxi = input;
        }
        printf("Case %ld: %ld\n", i, maxi);
        i++;
    }
    return 0;
}