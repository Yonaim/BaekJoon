#include <stdio.h>
#include <stdbool.h>

bool is_prime(int n)
{
    if (n == 1)
        return false;
    for (int i = n - 1; i > 1; i--)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

bool find_prime_comb(int n)
{
    int fir, sec;
    fir = n;
    while (fir >= 2)
    {
        if (is_prime(fir))
        {
            sec = 2;
            while (sec <= n)
            {
                if (is_prime(sec) && fir + sec == n)
                {
                    printf("%d = %d + %d\n", n, sec, fir);
                    return true;
                }
                sec++;
            }
        }
        fir--;
    }
    return false;
}

int main()
{
    int n;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        if (n < 6 || n > 1000000)
            continue;
        else if (find_prime_comb(n) == 0)
            printf("Goldbach's conjecture is wrong.\n");
    }
    return 0;
}