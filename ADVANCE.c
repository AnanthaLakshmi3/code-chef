#include <stdio.h>
int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z;
        scanf("%d%d",&x,&y);
        z=x+200;
        if(y>=x && y<=z){
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
