#include <stdio.h>

int main() {
    int N, a, min;

    scanf("%d", &N); 
    scanf("%d", &min); 

    for (int i = 1; i < N; i++) 
    {
        scanf("%d", &a);
        if (a < min)
        {
            min = a;
        }
    }

    printf("%d\n", min); 

    return 0;
}


// max
// #include <stdio.h>

// int main() {
//   int N;
//   int a=0;
//   int max=0; 
//   scanf("%d",&N);
//   for (int i =1 ; i <= N; i++)
//   {
//     scanf("%d",&a);
//     if (a>max)
//     {
//        max=a;
//     }
//   }
//   printf("%d",max);
  
//     return 0;
// }
