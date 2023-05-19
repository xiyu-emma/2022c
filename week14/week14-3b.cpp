#include <stdio.h>

int main(){
	int a[100], n;

	scanf("%d", &n);

	for(int i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}

	for(int i=n; i>=1; i--){
		if(a[i]%2 != 0) printf("%d ", a[i]);
	}
}
