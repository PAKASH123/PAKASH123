#include <stdio.h>
int main()
{
    int a,b,c,d;
    a=50;
    b=65;
    c=26;
    d=63;
    printf("the sum of a and b %d\n",a==b);
    printf("the sum of a and c %d\n",a>c);
    printf("the sum of c and d %d\n",c<d);
    printf("sum of d and c %d\n", b>=c);
    printf("the sum of d and a %d\n", d>=a);
    printf("the sum of b and d %d\n", b==d);
    printf("the sum of c and a %d\n", c<=a);
    return 0;
}