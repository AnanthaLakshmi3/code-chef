#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
   int x,y,a,b,c;
   scanf("%d%d",&a,&b);
   x=100-a;
   y=200-(2*b);
   if(x<y){
       printf("FIRST\n");
   }
   else if(x>y){
       printf("SECOND\n");
   }
   else if(x==y){
       printf("BOTH\n");
   }
    }
}

