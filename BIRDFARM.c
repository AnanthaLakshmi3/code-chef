#include <stdio.h>

int main(void) {
	// your code goes here
   int t;
   scanf("%d",&t);
   while(t--)
   {
       int x,y,z,chick,duck;
       scanf("%d%d%d",&x,&y,&z);
       
       chick=(z%x==0);
       duck=(z%y==0);
       
       if( chick && duck){
           printf("ANy\n");
       }
       else if(chick){
           printf("CHICKEN\n");
       }
       else if(duck){
           printf("DUCK\n");
       }
       else{
           printf("NONE\n");
       }
   }
}

