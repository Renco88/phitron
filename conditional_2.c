#include <stdio.h>
int main()
{
    int Taka;
    scanf("%d", &Taka);
    if (Taka >= 100)
    {
        printf("burger khabo");
    }
    else if (Taka >= 50)
    {
        printf("fuska khabo");
    }
    else
    {
        printf("kiccu khabo na");
    }
    return 0;
}