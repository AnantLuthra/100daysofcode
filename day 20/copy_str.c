#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char *s = "hi";
    char *t = s;
    t[0] = toupper(t[0]);
    
    // Printing both s and t
    printf("s - %s\n", s);
    printf("t - %s\n", t);
}