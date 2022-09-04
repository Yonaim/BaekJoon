#include <stdio.h>

int find_multiple(int n)
{
    int m = 1;
    int expo = 1;
    
    if (n % 2 == 0 || n % 5 == 0)
        return -1;
    while (m > 0)
    {
        if (m % n == 0)
            return expo;
        m = (m * 10) + 1;
        expo++;
    }
    return -1;
}

int main()
{
    int n;
    
    while (scanf("%d", &n) != EOF)
    {
        printf("%d\n", find_multiple(n));
    }
    return 0;
}