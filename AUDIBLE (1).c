#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d",&x);
        if(x>=67&&x<=45000)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}

