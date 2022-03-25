#include <stdio.h>
#include <string.h>

int main()
{
    long long n, len;
    char num[100000], res;
    scanf("%lld", &n);
    while (n--)
    {
        scanf("%s", num);
        len = strlen(num);
        if (!strcmp(num, "1") || !strcmp(num, "4") || !strcmp(num, "78"))
            res = '+';
        else if (num[len-2] == '3' && num[len - 1] == '5')
            res = '-';
        else if (num[0] == '9' && num[len - 1] == '4')
            res = '*';
        else
            res = '?';
        printf("%c\n", res);
    }
    return 0;
}