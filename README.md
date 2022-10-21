# 2022c  
# 資傳一甲 程式設計的程式倉庫

# week01
(中秋節)

# week06
## 九九乘法表
week06考試內容
```cpp
#include <stdio.h>

int main()
{
	for(int i=1; i<=9; i++){
		for(int j=1; j<=9; j++){
			printf("%d*%d=%2d ", j, i, i*j);
		}
		printf("\n");
	}
}
```
## 畫星星金字塔
step1 先搭鷹架(算一行有幾顆星星)
```cpp
#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++){
        int star = (i*2)-1;
        printf("鷹架:%d樓 %d星\n", i, star);
    }
}
```
step2 算一行星星前面要加幾個空格，印出完整的金字塔
```cpp
#include <stdio.h>

int main()
{
    for(int i=1; i<=5; i++){
        int space = 5-i;
        int star = (i*2)-1;
        for(int j=0; j<space; j++){
            printf(" ");
        }
        for(int j=0; j<star; j++){
            printf("*");
        }
        printf("鷹架:%d樓 %d空格 %d星\n", i, space, star);
    }
}
```
## 分數約分，找最大公因數
方法1 暴力解法
```cpp
#include <stdio.h>

int main()
{
    printf("請輸入2個數: ");

    int a, b, ans;
    scanf("%d%d", &a, &b);

    for(int i=1; i<=a; i++){
        if(a%i ==0 && b%i==0) ans=i;
    }
    printf("找到ans:%d", ans);
}
```
方法2 輾轉相除法
```cpp
#include <stdio.h>

int main()
{
    printf("請輸入2個數: ");

    int a, b, c;
    scanf("%d%d", &a, &b);

    while(1){
        c = a%b;
        printf("a:%d b:%d c:%d\n", a, b, c);
        if(c == 0) break;
        a = b;
        b = c;
    }
    printf("中的是:%d", b);
}
```
# week07
## 印出n行星星金字塔
week07考試內容
```cpp
#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n-i; j++) printf(" ");
		for(int j=1; j<=i*2-1; j++) printf("*");
		
		printf("\n");
	}
}
```
## 印出大數
使用long long int印出18~19位元的數
```cpp
#include <stdio.h>

int main()
{
    int n=1234567812345678;
    printf("%d\n", n);

    long long int a=1234567812345678;
    printf("%lld\n", a);
}
```
## 最大公因數(大數版本)
方法1 暴力法(很慢!!!)
```cpp
#include <stdio.h>

int main()
{
    long long int a, b, ans, i;

    scanf("%lld%lld", &a, &b);

    for(i=1; i<=a; i++){
        if(a%i==0 && b%i==0) ans=i;
    }
    printf("答案是:%lld\n", ans);
}
```
方法2 輾轉相除法
```cpp
#include <stdio.h>

int main()
{
    long long int a, b, c;

    scanf("%lld%lld", &a, &b);

    while(1){
        c = a%b;
        printf("%lld%lld%lld\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("答案是:%lld\n", b);
}
```
