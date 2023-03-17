#include <stdio.h>

bool isPalindrome(int x){
    if(x < 0) return false;

    long long int r=0;
    int x2=x;
    while(x>0){
        r = r*10 + x%10;
        x /= 10;
    }

    if(r == x2) return true;
    else return false;
}

int main()
{
    isPalindrome(121);
}
