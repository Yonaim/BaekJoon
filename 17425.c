#include <stdio.h>

int main()
{
    long long N[1000001] = {0, };
    int n;
    int count;

    for (int div = 1; div <= 1000000; div++)
    {
        for (int i = div; i <= 1000000; i += div)
            N[i] += div;
        N[div] += N[div - 1];
    }
    scanf("%d", &count);
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &n);
        printf("%lld\n", N[n]); 
    }
    return 0;
}
