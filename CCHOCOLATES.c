#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int x, y, z,ten,five,total,chocos;
        scanf("%d %d %d", &x, &y, &z);
        // Your code goes here
         five=5*x;
         ten=10*y;
         total=five+ten;
         chocos=total/z;
         printf("%d\n",chocos);
    }

}
