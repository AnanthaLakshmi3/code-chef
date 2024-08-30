#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        if(x<50  )
        {
            printf("Z\n");
        }
        else if(x>=50 && y<50)
        {
            printf("F\n");
        }
        else 
        {
            printf("A\n");
        }
    }
}

