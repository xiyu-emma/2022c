#include <stdio.h>

int main()
{
	char c1, c2, c3, c4;
	int sum=0;

	scanf("%c%c%c%c", &c1, &c2, &c3, &c4);

	if(c1=='1') sum+=8;
	if(c2=='1') sum+=4;
	if(c3=='1') sum+=2;
	if(c4=='1') sum+=1;

	printf("%d\n", sum);
}
