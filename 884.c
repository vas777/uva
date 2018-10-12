//For each test case, print the maximum number of factors (excluding 1) that can be multiplied together
//to produce n! 8!= 11 factors
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prime_array[1000] = {2, 3, 5, 7, 11};
int is_prime(int x)
{
    if (x <= 1)
    {
        return 0;
    }
    else
    {
        int i;
        for (i = 2; i * i <= x; i++)
            if (x % i == 0)
                return 0;
    }
    return 1;
}

int factors(int input)
{
    int initial = input;
    int top = input / 2;
    int count = 0;

        while (input % 2 == 0)
        {
            input /= 2;
            count++;
        }
    
    for (int i = 3; i <= top; i += 2)
    {
        while (input % i == 0)
        {
            input /= i;
            count++;
        }
    }
    return count;
}
void solution(int input)
{
    int res = 0;

    for (size_t i = 2; i <= input; i++)
    {
        if (is_prime(i))
        {
            res++;
        }
        else
        {
            res += factors(i);
        }
    }
    printf("%d", res);
}
int main()
{
    int input;

    while (scanf("%d", &input) == 1)
    {
        if (input == EOF)
            break;
        solution(input);
        printf("\n");
    }
    return 0;
}