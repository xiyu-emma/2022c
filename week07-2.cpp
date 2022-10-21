#include <stdio.h>

int main()
{
    long long int a, b, ans, i;

    scanf("%lld%lld", &a, &b);

    for(i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("µª®×¬O:%lld\n", ans);
}
