#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,x,y;
	    scanf("%d%d",&a,&b);
	    x=a/10;
	    y=(x*b);
	    printf("%d\n",y);
	}

}

