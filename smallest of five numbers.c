#include<stdio.h>
int main()
{
    int a,b,c,d,e,x,y,z;
    printf("Input five numbers");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    x=a<b?a:b;
    y=c<d?c:d;
    z=x<y?x:y;
    z=z<e?z:e;
    printf("Three smallest numbers=%d",z);
    return 0;
}
