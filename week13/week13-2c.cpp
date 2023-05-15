#include <stdio.h>

int main()
{
	int a[11], n;

	scanf("%d", &n);

	for(int i=0; i<n; i++){
		scanf("%d", &a[i]);
		a[i] *= a[i];
	}
	for(int i=0; i<n; i++){
		printf("%d,", a[i]);
	}
	printf("\n");
}
