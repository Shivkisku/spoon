#include<stdio.h>

void main()
{
    for (int r = 1; r <= 20; r++)
    {
        for (int c = 1; c <= 20; c++)
        {
            if ((c==15 && r>15)||(r==c && r<16)||(r==20 && c>15)||(c==20 && r>15))
                printf("%2d",r);
            else
                printf("  ");
        }
        printf("\n");
    }
}
// 