#include <stdio.h>

int main()
{
	int n, a=10;

	scanf("%d", &n);

	printf("%d ", n%10);
	n /= 10;
	while(n>0){
		printf("%d ", n%10*a);
		a *= 10;
		n /= 10;
	}
}
