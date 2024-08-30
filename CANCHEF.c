#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z,p,q;
	    scanf("%d%d",&x,&y);
	    p=(2*y);
	    q=(x*15);  //225
	    if(q>=p)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        printf("NO\n");
	    }
	}

}

