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

