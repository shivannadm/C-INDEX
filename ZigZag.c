//ZigZag pattern 

#include<stdio.h>

int main()
{
    int r ,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<9;c++)
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
