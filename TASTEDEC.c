#include <stdio.h>

int main(void) {
    	int t;
	scanf("%d",&t);
	while(t--)
	{
	   int x,y,z,p;
	   scanf("%d%d",&x,&y);
	   z=(5*y);
	   p=(2*x);
	   if(p>z)
	   {
	       printf("Chocolate\n");
	   }
	   else if(p<z)
	   {
	       printf("Candy\n");
	   }
	   else if(p==z)
	   {
	       printf("Either\n");
	   }
	}

}

