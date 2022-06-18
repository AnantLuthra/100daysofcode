#include <stdio.h>

int collatz(int n);

// steps variable.
int steps;

int main(void)
{
    int n;
    printf("Enter an callatz value you want of: ");
    scanf("%d", &n);
    printf("value is %i\n", collatz(n));
}

int collatz(int n)
{
    // Base case.
    if (n == 1)
    {
        return 0;
    }
    else if (n % 2 == 0)
    {
        return 1 + collatz(n / 2);
    }
    return 1 + collatz(3 * n + 1);
}