#include <stdio.h>

void mario_question(int n);

void main(void)
{
    mario_question(3);
}

void mario_question(int n)
{                           
    // for (int i = 1; i <= n; i++)

    //     if (i < n) printf("?");
    //     else printf("?\n");

        // if (i < n) printf("?");
        // else if (i == n) printf("?\n");
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// ------------------------------------------------------------------------------

// #include <stdio.h>

// void main(void)
// {   
//     float a = 1;
//     float b = 10;

//     // int z = a/b;
//     float z = a/b;

//     // printf("%i\n",z);
//     printf("%.50f\n",z);
// }

// #include <stdio.h>
// #include <math.h>

// void main(void)
// {   
//     float a = 2.50;
//     // float b = 10;

//     int z = round(a * 100);

//     // printf("%i\n",z);
//     printf("%i\n",z);
// }

