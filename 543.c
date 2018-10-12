#include <stdio.h>
int is_prime(int a);
int main()
{
    int input,big,small;
     while( scanf("%d", &input) == 1) {
        if(input==0){
            break;
        }
        int i;
       for ( i = 3; i < input; i++) {
         
         if(is_prime(i)){
            big = input - i; 
            if(is_prime(big)){
                small = i;
                break;
            }
         }
       }
        printf("%d = %d + %d\n",input,small,big);
     }

    return 0;
}
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
