#include <stdio.h>

double calcul(char op, double n1, double n2)
{
    if (op == '+')
        return (n2 + n1);
    if (op == '-')
        return (n2 - n1);
    if (op == '*')
        return (n2 * n1);
    if (op == '/')
        return (n2 / n1);
    return 0;
}

int main()
{
    int argc;
    int argv[26];
    char exp[200];
    double stack[200];
    
    scanf("%d", &argc); // 인자의 개수
    scanf("%s", exp); // 수식
    for(int i = 0; i < argc; i++)
        scanf("%d", &argv[i]);
    char *ptr;
    double *cur;
    ptr = exp;
    cur = stack;
    while(*ptr)
    {
        if ('A' <= *ptr && *ptr <= 'Z')
        {
            *cur = argv[(*ptr - 'A')]; // 스택에 피연산자(알파벳에 대응되는 숫자) 쌓아두기
            cur++;
        }
        else
        {
            cur--;
            double tmp1 = *cur;
            cur--;
            double tmp2 = *cur;
            *cur = calcul(*ptr, tmp1, tmp2);
            cur++;
        }
        ptr++;
    }
    cur--;
    printf("%.2lf\n", *cur);
    return 0;
}