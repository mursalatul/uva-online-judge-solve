#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int i = 1;
    char input[100];
    char *lan = (char*) malloc(sizeof(char) * 100);

    while (1)
    {
        scanf("%s", input);
        if (!strcmp(input, "#")) break;
        else if (!strcmp(input, "HELLO")) lan = "ENGLISH";
        else if (!strcmp(input, "HOLA")) lan = "SPANISH";
        else if (!strcmp(input, "HALLO")) lan = "GERMAN";
        else if (!strcmp(input, "BONJOUR")) lan = "FRENCH";
        else if (!strcmp(input, "CIAO")) lan = "ITALIAN";
        else if (!strcmp(input, "ZDRAVSTVUJTE")) lan = "RUSSIAN";
        else lan = "UNKNOWN";
        printf("Case %d: %s\n", i, lan);
        i++;
    }
    return 0;
}