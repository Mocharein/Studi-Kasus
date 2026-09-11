#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, C;
    
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    
    if (A-B==C){
        printf("-");
    }
    else if (A+B==C){
        printf("+");
    }
    else if (A*B==C){
        printf("*");
    }
    else{
        printf("Tidak Ada");
    } 

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}