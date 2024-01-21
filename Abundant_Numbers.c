#include <stdio.h>
int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) 
    {
        if (num % i == 0) 
        {
            sum += i;
        }
    }

    return sum;
}
int isAbundant(int num) {
    return (sumOfDivisors(num) > num);
}

int main() 
{
    int number;
    scanf("%d", &number);
    if (isAbundant(number)) 
    {
        printf("True");
    } else 
    {
        printf("False");
    }

    return 0;
}