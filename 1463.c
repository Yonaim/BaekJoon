#include <stdio.h>

int how_many_op_until_n(int n)
{
    int dp[101] = {0, };

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i - 1] + 1;
        if (i % 3 == 0 && (dp[i/3] + 1 < dp[i]))
            dp[i] = dp[i/3] + 1;
        if (i % 2 == 0 && (dp[i/2] + 1 < dp[i]))
            dp[i] = dp[i/2] + 1;
    }
    return dp[n];
}

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", how_many_op_until_n(n));
    return 0;
}