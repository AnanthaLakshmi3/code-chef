#include <stdio.h>

int main(void) {
	// your code goes here
	int x;
	float y,z;
	scanf("%d",&x);
	scanf("%f",&y);
	
	if((x+0.5)<=y)
	{
	  if(x%5==0)
	  {
	    z=y-x-0.5;
	    printf("%0.2f",z);
	      
	  }
     	else if(x%5!=0)
     	{
	    printf("%0.2f",y);
      }
	}
	    else
	    {
	    printf("%0.2f",y);
	 }
}

