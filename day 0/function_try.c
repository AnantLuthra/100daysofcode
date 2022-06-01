#include <stdio.h>

int do_task(int age, int class);

void main(void)
{
    int result = do_task(111, 11);
    if (result == 0) printf("You are allowed !!\n");
    else printf("Sorry you are not permitted !!\n");
}

int do_task(int age, int class)
{
    if (age >= 18 && class == 12) return 0;
    else return -1;
}