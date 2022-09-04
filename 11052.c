#include <stdio.h>
#define MIN(n1,n2) n1 > n2 ? n2 : n1

int most_cheap(int n, int *p)
{
    int dp[1001] = {0, };

    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i-1] + p[1];
        for (int j = 1; j <= i; j++)
            dp[i] = MIN(dp[i], dp[i-j] + p[j]);
    }
    return dp[n];
}

int main()
{
    int n;
    int p[1001];

    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        scanf("%d", &p[i]);
    printf("%d\n", most_cheap(n, p));
    return 0;
}