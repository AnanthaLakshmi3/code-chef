#include <stdio.h>

int main(void) {
	// your code goes here
	char str[200];
	int i;
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++){
	    if(i==6){
	        printf("%c",str[6]);
	    }
	}
    	return 0;

}

