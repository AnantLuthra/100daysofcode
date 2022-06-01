#include <stdio.h>

void nacho(int n);

int main(void)
{
    nacho(14);
}

void nacho (int n)
{
    for (int i = 1; i<=n; i++)
        printf("Hello %i\n", i);
}
