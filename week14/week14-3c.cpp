#include <stdio.h>

int main(){
	char c;

	for(int i=1; i<=10; i++){
		scanf("%c", &c);
		if(c>='0' && c<='9'){
			printf("%c\n", c);
			return 0;
		}
	}
}
