#include <stdio.h>

int main()
{
    int i, n;
    int f=0;

    printf("判斷數字是否為質數:");
    scanf("%d", &n);

    for(i=2; i<n; i++){
        if(n%i == 0) f=1;
    }

    if(f=0) printf("%d是質數", n);
    else printf("%d不是質數", n);
}

