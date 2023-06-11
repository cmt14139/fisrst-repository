#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i <= 30; i++)
    {
        j = powint(2, i);
        printf("%d\t%d\n", i, j);
    }

    return 0;
}
