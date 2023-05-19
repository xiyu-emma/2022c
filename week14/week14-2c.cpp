#include <stdio.h>

int main()
{
	int a[20], fast=10000, n;

	for(int i=1; i<=10; i++){
		scanf("%d", &a[i]);
		if(a[i]<fast){
			fast = a[i];
			n = i;
		}
	}

	int speed = 60*60*1.2/fast;
	printf("%d %d\n", n, speed);
}
