#include <stdio.h>

int main()
{
    int t, n, previous_wall_hight, next_wall_hight, i, j, jump_up, jump_down;
    scanf("%d", &t);
    for (j = 1; j <= t; j++)
    {
        jump_down = jump_up = 0;
        // number of walls
        scanf("%d", &n);

        // first wall = mario standing on
        scanf("%d",&previous_wall_hight);
        
        // other walls hights
        for (i = 1; i < n; i++)
        {
            scanf("%d", &next_wall_hight);
            if (next_wall_hight > previous_wall_hight) jump_up++;
            else if (next_wall_hight < previous_wall_hight) jump_down ++;
            previous_wall_hight = next_wall_hight;
        }

        printf("Case %d: %d %d\n", j, jump_up, jump_down);
    }
    return 0;
}