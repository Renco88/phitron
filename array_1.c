// #include <stdio.h>

// int main() {
//   int ar[]={4,54,6,7};
// //   for (int i = 0; i < 10; i++)
// //   {
// //     /* code */
// //     scanf("%d",&ar[i]);
// //   }
//   for (int i = 0; i <= 3; i++)
//   {
//     /* code */
    
//     printf("%d\n",ar[i]);

//   }
  
  
//     return 0;
// }


#include <stdio.h>

int main() {
  int n;
  scanf("%d",&n);
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    /* code */
    scanf("%d",&arr[i]);
  }
  for (int i = n-1; i >= 0; i--)
  {
    /* code */
    printf("%d\n",arr[i]);
  }
  
    return 0;
}
