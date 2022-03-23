#include <stdio.h>

int main()
{
    int treats_num, j, i = 1, treat_want, treat_given, treat;
    while(1)
    {
        treat_want = treat_given = 0;
        scanf("%d", &treats_num);
        if (!treats_num) break;
        for (j = 0; j < treats_num; j++)
        {
            scanf("%d", &treat);
            if (!treat) treat_given++;
            else treat_want++;
        }
        printf("Case %d: %d\n", i, treat_want - treat_given);
        i++;
    }
    return 0;
}