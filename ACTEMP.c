#include <stdio.h>

int main(void) {
	// your code goes here
		int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z,i,j,k,c=0;
	    scanf("%d%d%d",&x,&y,&z);
	     if( x<=y && z<=y)
	     {
	        printf("Yes\n"); 
	     }
	     else{
	         printf("No\n");
	     }
     }

}

