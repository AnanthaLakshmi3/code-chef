#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i;
	    scanf("%d",&n);
	    int a[n];
	    for (i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int c=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>=1000)
	        {
	            c=c+1;
	        }
	    }
	    printf("%d\n",c);
	}

}

