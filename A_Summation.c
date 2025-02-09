#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    long long arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%lld",&arr[i]);
    }
    long long sum=0;
    for ( int i = 0; i < n; i++)
    {
        /* code */
        sum+=arr[i];
    }
    if(sum<0){
        printf("%lld",sum*-1);
    }else{
        printf("%lld",sum);
    }
    
  
    return 0;
}
