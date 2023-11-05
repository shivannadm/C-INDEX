//Triangle pattern 

#include <stdio.h>

int main()
{
    int r, c;

    // Straight traingle

    for (r = 1; r < 5; r++)
    {
        for (c = 1; c < 8; c++)
        {
            if (r == 4 && c < 8 || c - r == 3 || r + c == 5 || r != 1 && r + c == 6 || r == 3 && c == 4 || r == 3 && c == 5)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    printf("\n");

    // Inverse Triangle
    for (r = 1; r < 5; r++)
    {
        for (c = 1; c < 8; c++)
        {
            if (r == 1 && c < 8 || r - c == 0 || r + c == 8 || (r == 2 || r == 3) && r + c == 7 || r == 2 && r + c == 6 || r == 2 && r + c == 5)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}
