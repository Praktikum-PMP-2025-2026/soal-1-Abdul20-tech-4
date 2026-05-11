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

int main(){
    int i, j, N, a[256][256], k, l;
    scanf("%d",&N);
    
    for(k = 0; k<N; k++){ //input matriks
        for (l = 0; l < N; l++){
            scanf("%d", &a[k][l]);
        }
    }

    int idxiso=999;
    int count=0, max=0, idxmax=0;
    for(i = 0; i<N; i++){ //hitung derajat simpul
        for (j = 0; j < N; j++){
            if (a[i][j]==1){
                count = count+1;
            }
        }
        printf("DEGREE %d %d\n", i, count);
        if(max<count){
            max = count;
            idxmax = i;
        }else if(max==count){
            idxmax=idxmax;
        }
        if (count == 0){
            if (idxiso == 999){
                idxiso = i;
            }else{
                idxiso=idxiso;
            }
        }
        count = 0;
    }
    printf("MAX_VERTEX %d\n", idxmax);
    if(idxiso==999){
        printf("ISOLATED NONE");
    }else{
        printf("ISOLATED %d", idxiso);
    }
    
    return 0;
}
