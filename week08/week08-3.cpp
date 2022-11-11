#include <stdio.h>

int main()
{
    int i, n;
    int f=0;

    printf("耞计琌借计:");
    scanf("%d", &n);

    for(i=2; i<n; i++){
        if(n%i == 0) f=1;
    }

    if(f=0) printf("%d琌借计", n);
    else printf("%dぃ琌借计", n);
}

