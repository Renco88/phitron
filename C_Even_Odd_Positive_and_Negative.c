#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int a;
    int even = 0, odd = 0, pos = 0, neg = 0;
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
         if(a>0){
            pos++;
        }
        else if(a<0)
        {
            neg++;
        }
    }

    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d",even,odd,pos,neg);

    return 0;
}
