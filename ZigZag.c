//ZigZag pattern 

#include<stdio.h>

int main()
{
    int r ,c;
    for(r=1;r<4;r++)
    {
        for(c=1;c<8;c++)
        {
            if((r+c)%4==0 || r==2 && c%4==0)
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
