#include <stdio.h>

int main() {
    char s[1000001];
    scanf("%[^\\]", s); 
    printf("%s\n", s); 
    return 0;
}