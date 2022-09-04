#include <stdio.h>

int main(){
    int T, n;
    int dp[11] = {0,1,2,4,0, };

    scanf("%d", &T);
    for (int i = 4; i <= 10; i++)
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3]; // 1만 부족한 경우, 2만 부족한 경우, 3만 부족한 경우의 수의 합을 구함
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &n);
        printf("%d\n", dp[n]);
    }
    return 0;
}