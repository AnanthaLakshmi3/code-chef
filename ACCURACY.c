#include <stdio.h>

int main(void) {
	// your code goes here
    	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x,y,z;
	    scanf("%d",&n);
	    if(n%3==0){
	        printf("%d\n",0);
	    }
	    else if(n%3!=0)
	    {
	        x=(n/3)+1;
	        y=x*3;
	        z=y-n;
	        printf("%d\n",z);
	    }
	}
}