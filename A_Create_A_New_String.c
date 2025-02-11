#include <stdio.h>
#include<string.h>
int main() {
    char S[1000];
    char T[1000];
    scanf("%s",S);
    scanf("%s",T);
   int len1=strlen(S);
   int len2=strlen(T);
  printf("%d %d\n",len1,len2);
  printf("%s %s",S,T);
    return 0;
}
