#include <stdio.h>

int main()
{
	int n, f=0;

	scanf("%d", &n);

	for(int i=1; i<=1000; i++){
		if(i*i == n){
			printf("%d", i);
			f=1;
			break;
		}
	}

	if(f==0) printf("0");
}
