#include <stdio.h>

int main(void) {
	// your code goes here
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y,z,p;
        scanf("%d%d",&x,&y);
        if(x>y)
        {
            z=(x-y);
            printf("%d\n",z);
        }
        else if(x<y){
            p=(y-x);
            printf("%d\n",p);
        }
        else if(x==y){
            printf("%d\n",0);
        }
    }
    return 0;
}

