#include <stdio.h>

int main()
{
    int i, n, a, f;

    scanf("%d", &a);

    for(n=2; n<=a; n++){
        f=0;
        for(i=2; i<n; i++){
            if(n%i == 0) f=1;
        }
        if(f==0) printf("%d ", n);
    }
}
