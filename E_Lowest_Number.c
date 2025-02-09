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
  int min= arr[0],pos=1;
  for (int i = 1; i < n; i++)
  {
    /* code */
    if (arr[i]<min)
    {
        min=arr[i];
        pos+=i;
     
    }
  }
  printf("%d ",min);
  printf("%d ",pos);
//  for (int i = 0; i < n; i++)
//  {
//     /* code */
//     if ( arr[i]==min)
//     {
//         /* code */
//         i+=1;
//         printf("%d",i);
//         break;
//     }
   
//  }
  
    return 0;
}
