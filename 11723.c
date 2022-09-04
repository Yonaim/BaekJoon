#include <stdio.h>
#include <string.h>

int main()
{
    int S = 0;
    int cnt, n;
    char op[7];

    scanf("%d", &cnt);
    while (cnt--)
    {
        scanf("%s %d", op, &n);
        if (strcmp(op, "add") == 0)
            S |= (1 << n);
        else if (strcmp(op, "remove") == 0)
            S &= ~(1 << n);
        else if (strcmp(op, "check") == 0)
            printf("%d\n", (S & (1 << n)) >> n);
        else if (strcmp(op, "toggle") == 0)
            S ^= (1 << n);
        else if (strcmp(op, "all") == 0)
            S = (1 << 21) - 1;
        else if (strcmp(op, "empty") == 0)
            S = 0;
    }
    return 0;
}