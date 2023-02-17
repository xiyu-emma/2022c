#include <stdio.h>

int main()
{
    int a[4] = {10, 20, 30, 40};
    int i;

    for(i=0; i<4; i++){
        printf("a[%d]:%d\n", i,a[i]);
    }
    for(i=3; i>=0; i--){
        printf("a[%d]:%d\n", i,a[i]);
    }
}

