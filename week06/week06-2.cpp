#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++){
        int space = 5-i;
        int star = (i*2)-1;
        for(int j=0; j<space; j++){
            printf(" ");
        }
        for(int j=0; j<star; j++){
            printf("*");
        }
        printf("ÆN¬[:%d¼Ó %dªÅ®æ %d¬P\n", i, space, star);
    }
}

