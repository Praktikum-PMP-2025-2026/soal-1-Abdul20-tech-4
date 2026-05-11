/** EL2008 Praktikum Pemecahan Masalah dengan Pemrograman 2025/2026
 *   Modul               : 05 - Foundation of Algorithm
 *   Hari dan Tanggal    : Senin, 11 Mei 2026
 *   Nama (NIM)          : Abdullah (13224101)
 *   Nama File           : Prak5.c
 *   Deskripsi           : Program untuk menghitung derajat suatu baris, jumlah simpul maksimum, dan jumlah simpul terisolasi
 *                         Input dari program adalah nilai
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define SIZE 256

void tampilkanMatriks(int a[256][256], int N){
    
}

int main(){
    int i, j, N, a[256][256];
    scanf("%d",&N);
    
    for(i = 0; i<N; i++){ //input matriks
        for (j = 0; j < N; j++){
            scanf("%d", &a[i][j]);
        }
    }

    int count=0, max=0, idxmax=0;
    for(i = 0; i<N; i++){ //hitung derajat simpul
        count = 0;
        for (j = 0; j < N; j++){
            if (a[i][j]==1){
                count = count+1;
            }
        }
        printf("DEGREE %D %D\n", i, count);
        if(max<count){
            idxmax = j-1;
        }else if(max==count){
            idxmax=0;
        }
    }
    printf("MAX_VERTEX %d\n", idxmax);


    int idxiso=0;
    for(i = 0; i<N; i++){ //cek vertex terisolasi
        int count1 = 0;
        for (j = 0; j < N; j++){
            count1 = count1 + a[i][j];
        }
        if(count1==0){
            idxiso=j;
            break;
        }
    }
    printf("ISOLATED %d\n", idxiso-1);
    return 0;
}
