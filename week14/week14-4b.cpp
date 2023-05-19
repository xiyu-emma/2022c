#include <stdio.h>

int main()
{
	int k, sum=0;

	scanf("%d", &k);

	for(int i=1; i<=10000; i++){
		sum += i;
		if(sum>k){
			printf("%d", i);
			break;
		}
	}
}
