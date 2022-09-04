#include <stdio.h>

int main(){
    int T, n;
    int dp[1000001][4] = {0, };

    scanf("%d", &T);
    dp[1][1] = dp [2][2] = dp[3][1] = dp[3][2] = dp[3][3] = 1;
    for (int i = 4; i <= 1000000; i++)
    {
        dp[i][1] = (dp[i-1][2] + dp[i-1][3]) % 1000000009;
        dp[i][2] = (dp[i-2][1] + dp[i-2][3]) % 1000000009;
        dp[i][3] = (dp[i-3][1] + dp[i-3][2]) % 1000000009;
    }
    while (T--)
    {
        scanf("%d", &n);
        printf("%d\n", (dp[n][1] + dp[n][2] + dp[n][3]) % 1000000009);
    }
    return 0;
}