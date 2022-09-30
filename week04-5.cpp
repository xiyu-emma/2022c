//Allmen (ANSI)
#include <stdio.h>

int main()
{
    int i;
    for(i=0; i<4; i++)
    {
        printf("印出%d\n", i);
    }
    for(i=1; i<=4; i++)
    {
        printf("人類的版本,印出%d\n", i);
    }
}

//K&R
#include <stdio.h>

int main()
{
    int i;
    for(i=0; i<4; i++) {
        printf("印出%d\n", i);
    }
    for(i=1; i<=4; i++) {
        printf("人類的版本,印出%d\n", i);
    }
}
