#include <stdio.h>

int main(void) {
	// your code goes here
     int t;
     scanf("%d",&t);
     while(t--){
         int x,a,b,y;
         scanf("%d",&x);
         a=x-1;
         b=100-x;
         if(a<b){
             printf("LEFT\n");
         }
         else{
             printf("RIGHT\n");
         }
     }
}

