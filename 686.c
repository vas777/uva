//686 - Goldbach's Conjecture (II)
#include <stdio.h>
int is_prime(int x) {
    if (x<=1) {
        return 0;
    } else {
        int i;
        for( i=2;i*i<=x;i++) 
            if (x%i==0) return 0;          
    }
    return 1;
}
void count_pairs(int input){
    int count=0,big=0;
       for (int i = 3; i < input/2+1; i+=2) {
         if(is_prime(i)&&is_prime(input - i)){
                count++;
            }
         
       }
       if(input==4) count =1;
        printf("%d\n",count);
}
int main()
{
    int input;
     while( scanf("%d", &input) == 1) {
        if(input==0){
            break;
        }
    count_pairs(input);
       
     }

    return 0;
}

