#include <stdio.h>
int main()
{
    int tk;
    scanf("%d", &tk);
    if (tk >= 100)
    {
        printf("burger khaibo.");
    }
    else
    {
        printf("burger khabo nah.");
    }
    int sum = tk - 100;
    if (sum <= 100)
    {
        if (sum < 0)
        {
            printf("tk kom ase %d", abs(sum));
        }else{
              printf("ata khayor por amr kase kono tk e thakbe na , ami  %d", sum);

        }
    }
    else
    {
       printf("ata khayor por o amr kase tk thakbe %d", sum);
    }

    return 0;
}