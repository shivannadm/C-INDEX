#include<stdio.h>

int main()
{
    int r ,c;
    for(r=0;r<6;r++)
    {
        for(c=0;c<7;c++)
        {
            if(r==0 && c%3 !=0 || r==1 && c%3 == 0||r+c==8 ||r-c==2 ){
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