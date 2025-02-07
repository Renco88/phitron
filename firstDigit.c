// #include <stdio.h>

// int main() {
//   int X;
//   scanf("%d",&X);

//    int result1 =X/10;
//    int result2 =result1/10;
//    int result3 =result2/10;
 
//    if (result3==0)
//    {
//    printf("Invelid Input");
//    }else if (result3%2==0)
//    {
//     /* code */
//     printf("EVEN");
//    }else if (result3%2==1)
//    {
//     /* code */
//     printf("ODD");
//    }
   
  
//     return 0;
// }

#include <stdio.h>

int main() {
  int X;
  scanf("%d",&X);
  int firstDigit=X/1000;
  if(firstDigit%2 ==0){
    printf("EVEN\n");
  }else{
    printf("ODD\n");
  }
    return 0;
}

