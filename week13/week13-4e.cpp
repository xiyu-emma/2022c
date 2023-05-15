#include <stdio.h>

int main()
{
	int x1, y1, x2, y2, ans;

	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);

	ans = (x1-x2) * (y1-y2);

	if(ans<0) printf("%d", -ans);
	else printf("%d", ans);
}
