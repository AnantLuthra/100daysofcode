#include <stdio.h>

void char_test(void);
void str_ary(void);

int main(void)
{
    str_ary();
}


// void str_ary(void)
// {
//     string nacho = "nacho";
//     printf("%c", nacho[5]);
// }

void char_test(void)
{
    char a = 'H';
    char b = 'I';
    char c = '!';

    printf("%i %i %i\n", a, b, c);
}

