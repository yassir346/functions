#include <stdio.h>
#include <stdlib.h>

int sum(int x, int y){
    int c;
c = x + y;
return c;
}

int main()
{
    int a, b;

printf("enterz nombres");
scanf("%d", &a);

scanf("%d", &b);

int c = sum(a, b);

printf("sum : %d", c);

    return 0;
}














