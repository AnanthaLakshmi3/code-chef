#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d",&x);
	    if(x>100)
	    {
	        y=(x-10);
	        printf("%d\n",y);
	    }
	    else
	    {
	        printf("%d\n",x);
	    }
	}

}

