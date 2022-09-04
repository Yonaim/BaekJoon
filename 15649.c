#include <stdio.h>
#include <stdbool.h>

bool is_valid(int chk, int *arr, int depth)
{
    for (int i = 0; i < depth; i++)
    {
        if (chk < arr[i])
            return false;
    }
    return true;
}

void dfs(int range, int goal, int depth)
{
    static int arr[8] = {0, };
    if (depth == goal)
    {
        for (int i = 0; i < goal; i++)
            printf("%d ", arr[i]);
        printf("\n");
        return ;
    }
    int num = 1;
    while (num <= range)
    {
        if (is_valid(num, arr, depth))
        {
            arr[depth] = num;
            dfs(range, goal, depth + 1);
            arr[depth] = 0;
        }
        num++;
    }
    return ;
}

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    dfs(N, M, 0);
}