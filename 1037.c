#include <stdio.h>

int main()
{
    int count;
    int big;
    int small;
    int n;

    big = 1;
    small = 1000000;
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &n);
        if (n > big)
            big = n;
        if (n < small)
            small = n;
    }
    printf("%d\n", big * small);
    return 0;
}