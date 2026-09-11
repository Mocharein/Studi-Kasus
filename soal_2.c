#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int A, B, hasil_tambah, hasil_kurang, hasil_kali;
    
    scanf("%d", &A);
    scanf("%d", &B);
    
    hasil_tambah = A+B;
    hasil_kurang = A-B;
    hasil_kali = A*B;
    
    if ((hasil_tambah>hasil_kurang)&&(hasil_tambah>hasil_kali)){
        printf ("+");
    }
    else if ((hasil_kurang>hasil_tambah)&&(hasil_kurang>hasil_kali)){
        printf ("-");
    }
    else if ((hasil_kali>hasil_tambah)&&(hasil_kali>hasil_kurang)){
        printf ("*");
    }
    else{
        printf("Tidak Ada");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
