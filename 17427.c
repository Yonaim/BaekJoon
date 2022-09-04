#include <stdio.h>

int main()
{
    int N;
    int i;
    long long sum;

    sum = 0;
    i = 1;
    scanf("%d", &N);
    while (i <= N)
    {
        sum += i * (N / i);
        i++;
    }
    printf("%lld\n", sum);
    return 0;
}

