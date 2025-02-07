#include <stdio.h>

int main() {
  int X;
  scanf("%d",&X);
  if(X<=65){
    printf("Alphabet\n");
    if (X<=97)
    {
        /* code */
        printf("Capital Case\n");
    }else{
        printf("Small Case\n");
    }
  }else{
    printf("IS DIGIT");
  }
    return 0;
}
