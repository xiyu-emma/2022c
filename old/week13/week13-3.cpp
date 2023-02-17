#include <stdio.h>

int main()
{
	int a[100][100], m, n, i, j;

	scanf("%d%d", &m, &n);

	for(i=1; i<=m; i++){
		for(j=1; j<=n; j++){
			scanf("%d", &a[i][j]);
		}
	}
	printf("\n");
	for(i=m; i>=1; i--){
		for(j=n; j>=1; j--){
			printf(" %d ", a[i][j]);
		}
		printf("\n");
	}
}
