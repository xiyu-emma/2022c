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
# week08
## 印出最大公因數
week08考試內容
```cpp
#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d", &a, &b);

    while(1){
        c = a%b;
        printf("%d%d%d\n", a, b, c);
        if(c==0) break;
        a=b;
        b=c;
    }
    printf("%d\n", b);
}
```
## 印出直角星星三角形

2個for
```cpp
#include <stdio.h>

int main()
{
    int i, j, n;

    scanf("%d", &n);

    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            if(j <= n-i) printf(" ");
            else printf("*");
        }
        printf("\n");
    }
}
```
2個while
```cpp
#include <stdio.h>

int main()
{
    int i=1, j, n;

    scanf("%d", &n);

    while(i <= n){
        j = 1;
        while(j <= n){
            if(j <= n-i) printf(" ");
            else printf("*");
            j++;
        }
        i++;
        printf("\n");
    }
}
```
## 判斷質數
```cpp
#include <stdio.h>

int main()
{
    int i, n;
    int f=0;

    printf("判斷數字是否為質數:");
    scanf("%d", &n);

    for(i=2; i<n; i++){
        if(n%i == 0) f=1;
    }

    if(f=0) printf("%d是質數", n);
    else printf("%d不是質數", n);
}
```
## 找範圍1~n內的質數
```cpp
#include <stdio.h>

int main()
{
    int i, n, a, f;

    scanf("%d", &a);

    for(n=2; n<=a; n++){
        f=0;
        for(i=2; i<n; i++){
            if(n%i == 0) f=1;
        }
        if(f==0) printf("%d ", n);
    }
}
```
# week10
## 找範圍1~n內的質數
week10考試題目
```cpp
#include <stdio.h>

int main()
{
    int i, n, a, f;

    scanf("%d", &a);

    for(n=2; n<=a; n++){
        f=0;
        for(i=2; i<n; i++){
            if(n%i == 0) f=1;
        }
        if(f==0) printf("%d ", n);
    }
}
```
## 印出陣列
```cpp
#include <stdio.h>

int main()
{
    int a[4] = {10, 20, 30, 40};

    printf("a[0]:%d\n", a[0]);
    printf("a[1]:%d\n", a[1]);
    printf("a[2]:%d\n", a[2]);
    printf("a[3]:%d\n", a[3]);
}
```
## 印出陣列 (倒著印)
```cpp
#include <stdio.h>

int main()
{
    int a[4] = {10, 20, 30, 40};
    int i;

    for(i=0; i<4; i++){
        printf("a[%d]:%d\n", i,a[i]);
    }
    for(i=3; i>=0; i--){
        printf("a[%d]:%d\n", i,a[i]);
    }
}
```
# week11
## 印出陣列 (倒著印)
week11考試內容
```cpp
#include <stdio.h>

int main()
{
    int a[4] = {10, 20, 30, 40};
    int i;

    for(i=0; i<4; i++){
        printf("a[%d]:%d\n", i,a[i]);
    }
    for(i=3; i>=0; i--){
        printf("a[%d]:%d\n", i,a[i]);
    }
}
```
## 兩數交換
使用temp
```cpp
#include <stdio.h>
int main()
{
    int a=90, b=80, temp;
    printf("a:%d b:%d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("a:%d b:%d\n", a, b);
}
```
## 三數排序
```cpp
#include <stdio.h>
int main()
{
    int a=90, b=80, c=70, temp;

    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    if(b>c){
        temp = b;
        b = c;
        c = temp;
    }
    if(a>b){
        temp = a;
        a = b;
        b = temp;
    }
    printf("a:%d b:%d c:%d\n", a, b, c);
}
```
## 泡泡排序
排第一個數
```cpp
#include <stdio.h>
int main()
{
    int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0}, temp, i;

    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(i=0; i<10-1; i++){
        if(a[i] > a[i+1]){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
```
複製n次程式碼，排n個數
```cpp
#include <stdio.h>
int main()
{
    int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0}, temp, i;

    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(i=0; i<10-1; i++){
        if(a[i] > a[i+1]){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(i=0; i<10-1; i++){
        if(a[i] > a[i+1]){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(i=0; i<10-1; i++){
        if(a[i] > a[i+1]){
            temp = a[i];
            a[i] = a[i+1];
            a[i+1] = temp;
        }
    }

    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}
```
使用迴圈，把所有數字排序完成
```cpp
#include <stdio.h>
int main()
{
    int a[10]={90, 80, 70, 60, 50, 40, 30, 20, 10, 0}, temp, i, j;

    for(i=0; i<10; i++){
        printf("%d ", a[i]);
    }
    printf("\n");

    for(j=0; j<10-1; j++){
        for(i=0; i<10-1; i++){
            if(a[i] > a[i+1]){
                temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }

        for(i=0; i<10; i++){
            printf("%d ", a[i]);
        }
        printf("\n");
    }
}
```
# week12
## 百數排序(泡泡排序)
week12考試內容
```cpp
#include <stdio.h>

int main()
{
	int a[100], i, j, temp;
	
	for(i=0; i<100; i++){
		scanf("%d", &a[i]);
	}
	
	for(i=0; i<99; i++){
		for(j=0; j<99; j++){
			if(a[j]>a[j+1]){
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;	
			}
		}
	}
	
	for(i=0; i<100; i++){
		printf("%d\n", a[i]);
	}
}
```
## 選擇排序
```cpp
#include <stdio.h>

int main()
{
    int a[5] ={5, 4, 3, 2, 1};

    for(int i=0; i<5; i++){
        for(int j=i+1; j<5; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(int i=0; i<5; i++){
        printf("%d ", a[i]);
    }
}
```
## 陣列宣告
```cpp
#include <stdio.h>

int main()
{
    int a;
    int b=10;
    int c[3];
    int d[3] = {10, 20, 30};
    int g[2][3];
    int h[2][3] = { {10, 20, 30}, {40, 50, 60} };
}
```
## 印出二維陣列
```cpp
#include <stdio.h>

int main()
{
    int a[2][3] = {{10,20,30}, {40,50,60}};

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
```
## 矩陣加法
```cpp
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int n;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            c[i][j] = a[i][j]+b[i][j];
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }
}
```
## 矩陣乘法
```cpp
#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int n;

    scanf("%d", &n);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
        	c[i][j] = 0;
        	for(int k=0; k<n; k++){
        		c[i][j] += a[i][k]*b[k][j];
        	}
        }
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%3d ", c[i][j]);
        }
        printf("\n");
    }
}
```
