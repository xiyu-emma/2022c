//Allmen (ANSI)
#include <stdio.h>

int main()
{
    int i;
    for(i=0; i<4; i++)
    {
        printf("�L�X%d\n", i);
    }
    for(i=1; i<=4; i++)
    {
        printf("�H��������,�L�X%d\n", i);
    }
}

//K&R
#include <stdio.h>

int main()
{
    int i;
    for(i=0; i<4; i++) {
        printf("�L�X%d\n", i);
    }
    for(i=1; i<=4; i++) {
        printf("�H��������,�L�X%d\n", i);
    }
}
