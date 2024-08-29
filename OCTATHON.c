#include <stdio.h>

int main(void) {
	 int t;
     scanf("%d",&t);
     if(t<3)
     {
         printf("GOLD");
     }
     else if(3<=t && t<6)
     {
         printf("SILVER");
     }
     else if(t>=6)
     {
         printf("BRONZE");
     }

}

