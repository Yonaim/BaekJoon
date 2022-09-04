#include <stdio.h>

int main()
{
    int N;
    int max = 0;
    int arr[1001];
    int dp[1001] = {0, };
    
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
        scanf("%d", &arr[i]);
    for (int cur = 1; cur <= N; cur++)
    {
        int min = 0;
        for (int i = 1; i < cur; i++)
        {
            if (min < arr[i] && arr[i] < arr[cur])
            {
                min = arr[i];
                dp[cur]++;
            }
        }
        dp[cur]++;
        if (dp[cur] > max)
            max = dp[cur];
    }
    printf("%d\n", max);
}