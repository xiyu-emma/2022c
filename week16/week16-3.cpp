#include <stdio.h>

int main()
{
	int n, a[21], max, min, ans=-99999;

	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}

	printf("�Ы����N���~�� . . . \n");

	for(int i=1; i<=n; i++){
		for(int j=i+1; j<=n; j++){
			if(a[j]-a[i]>ans){
				ans = a[j]-a[i];
				max = a[j];
				min = a[i];
			}
		}
	}


	printf("�̤j�Q��=%d-%d=%d\n", max, min, ans);
}
