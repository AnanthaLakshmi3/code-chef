#include <stdio.h>

int main(void) {
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int x,y,z,a;
       scanf("%d%d%d",&x,&y,&z);
       a=(x+z);
       if(a<=y)
       {
           printf("Yes\n");
       }
       else
       {
           printf("No\n");
       }
   }

}

