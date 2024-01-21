#include <stdio.h>
int sumOfDivisors(int num) {
    int sum = 1; // Start with 1 since every number has 1 as a divisor
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            sum += i;
            if (i * i != num) {
                sum += num / i;
            }
        }
    }
    
    return sum;
}
int isAmicable(int num) 
{
    int sumA = sumOfDivisors(num);
    int sumB = sumOfDivisors(sumA);
    
    return (num == sumB && num != sumA);
}

int main() 
{
    int number;
    scanf("%d", &number);
    if (isAmicable(number)) 
    {
        printf("Amicable");
    } else 
    {
        printf("Not Amicable");
    }

    return 0;
}