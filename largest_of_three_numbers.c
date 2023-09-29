
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter number a");
	scanf("%d",&a);
	printf("Enter number b");
	scanf("%d",&b);
	printf("Enter number c");
	scanf("%d",&c);
	d=a>b&&a>c?a:(b>c?b:c);
	printf("Display the bigger number=%d",d);
	return 1;
}
