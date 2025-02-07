#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int result = N / 365;
    int result1 = N % 365;
    int result2 = result1 / 30;
    int result3 = result1 % 30;
    printf("%d years\n", result);
    printf("%d months\n", result2);
    printf("%d days\n", result3);
    return 0;
}
