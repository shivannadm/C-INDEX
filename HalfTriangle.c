// Right and Left angled Triangle printing

#include<stdio.h>

int main()
{
    int r,c;
    for(r=1;r<5;r++)
    {
        for(c=1;c<5;c++)
        {
            printf(" * ");
            c += c;
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}
