#include <stdio.h>

int main()
{
	int a, b, ans=0;

	scanf("%d%d", &a, &b);

	for(int i=a; i<=b; i++){
		int f=0;
		for(int j=2; j<i; j++){
			if(i%j==0) f=1;
		}
		if(f==0) ans++;
	}

	printf("%d\n", ans);
}
