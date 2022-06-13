#include <stdio.h>

int print_factorial(int n);

int main(void)
{
    int number = 4;
    printf("%i\n", print_factorial(number));
}

int print_factorial(int n)
{
    // Function that will print the factorial of a given number.
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return n * print_factorial(n-1);
}