#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=15;i++){
       
        if (i%2==0)
        {
            /* code */
            printf("this is even %d \n",i);
              if (i==6)
            {
                /* code */
                break;
            }
           
            
        }
        
         else{
            printf("this is odd %d \n",i);
        }
      
        
    }
}