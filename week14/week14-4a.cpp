#include <stdio.h>

int main()
{
	int s, m, h;

	scanf("%d", &s);
	h = s/3600;
	s = s%3600;
	m = s/60;
	s %= 60;

	printf("%02d:%02d:%02d", h, m, s);

}
