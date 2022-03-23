#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *input = (char *) malloc (sizeof(char) * 10);
    int i = 1;
    while (1)
    {
        scanf("%s", input);
        if (!strcmp(input, "*")) break;
        else if (!strcmp(input, "Hajj")) printf("Case %d: Hajj-e-Akbar\n",i);
        else printf("Case %d: Hajj-e-Asghar\n", i);
        i++;
    }
    return 0;
}