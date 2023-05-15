#include <stdio.h>

int main()
{
	int n, a[20], b, ans=0;

	for(int i=1; i<20; i++){
		scanf("%d", &a[i]);
		if(a[i]==0) break;
		b=i;
	}

	scanf("%d", &n);
	for(int i=1; i<=b; i++){
		if(a[i] == n) ans++;
	}

	printf("%d\n", ans);
}
