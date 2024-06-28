#include <stdio.h>
int main()
{
    char ch;
    for (ch = '1'; ch <= 127; ch++)
    {
        printf("%d", ch);
    }
    return 0;
}