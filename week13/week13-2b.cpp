#include <stdio.h>

int f(int n)
{
	int u=0;

	while(n>0){
		u = u*10 + n%10;
		n /= 10;
	}
	return u;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d\n",f(n));
	return 0;
}
