#include <stdio.h>

int main()
{
    int i, n;
    int f=0;

    printf("�P�_�Ʀr�O�_�����:");
    scanf("%d", &n);

    for(i=2; i<n; i++){
        if(n%i == 0) f=1;
    }

    if(f=0) printf("%d�O���", n);
    else printf("%d���O���", n);
}

