#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
//Complete the following function.


void calculate_the_maximum(int n, int k) {
    int i = 1,j=0,and=0,or=0,xor=0;
    for(; i < n ; i++){
        for(j = i+1 ; j <= n ; j++){
            if((i&j) < k && (i&j) > and){
                and = i&j;
            }
            if((i|j) < k && (i|j) > or){
                or = i|j;
            }
            if((i^j) < k && (i^j) > xor){
                xor = i^j;
            }
        }
    }
    printf("%d\n%d\n%d",and,or,xor);
  //Write your code here.
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
