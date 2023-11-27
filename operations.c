#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter the value of a,b,c :\n");
    scanf("%d%d%d",&a,&b,&c);
    printf("the sum of a and b %d\n",a&b);
    printf("the sum of b and c %d\n",c+=b);
    printf("the sum of a and c %d\n",c-=a);
    printf("the sum of b and c %d\n",b*=c);
    printf("the sum of a and c %d\n",a%=c);
    printf("the sum of b, c, a %d\n",b*=c%=a);
    printf("the sum of a, b, c %d\n",c%=a+=b);
    return 0;
}