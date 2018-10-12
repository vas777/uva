// prime factors -190 = -1 x 2 x 5 x 19
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void minus(int input){
       if(input<0){
           printf("%d = -1 x ",input);
       }  
       else printf("%d = ",input);
}
void factors(int input){
    int initial = input;
    input = abs(input);
    int top = (int)sqrt(input);
    int count = 0;
    
     while(input%2==0){
               if(count) printf(" x ");
               printf("%d",2);
                input /=2;
                count = 1; 
           }
    
       for (int i = 3; i <= top;i+=2 ) {
          
          while(input%i==0){
              //printf(" x");
              if(count) printf(" x ");
               printf("%d",i);
                input /=i;
                count = 1; 
          }
       }
       
       if(count && input!=1 )  printf(" x %d",input);
       if(!count ) printf("%d",input);
       
}
int main()
{
   int input;
   
   while(scanf("%d",&input)==1){
       if(input==0) break;
       minus(input);
       factors(input);
       
        printf("\n");
   }
    return 0;
}

