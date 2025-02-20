#include<stdio.h>
int add(int);
int main(){
	int l,c;
	printf("enter length");
	scanf("%d",&l);
	printf(" area of square:%d",add(l));
	return 0;
}
int add(int l)
{int c;
	c= l*l;
	return c;
}
