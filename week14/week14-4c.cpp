#include <stdio.h>

int main()
{
	int n, sum=1, a=3;

	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		sum += a;
		a += 2;
	}
	printf("f(%d)=%d", n, sum);
}
