#include <stdio.h>

int main(){
	int a[20];

	for(int i=1; i<=10; i++){
		scanf("%d", &a[i]);
	}

	for(int i=1; i<=10; i++){
		for(int j=i+1; j<=10; j++){
			if(a[i] < a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}

	for(int i=1; i<=10; i++){
		printf("%d ", a[i]);
	}
}
