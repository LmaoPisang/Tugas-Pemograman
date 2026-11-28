#include "pengurutan.h"

// fungsi untuk menukar nilai
void swap(int *a, int *b) {
    // nilai sementara
    int temp;

    // menyimpan nilai a ke temp dan menukar nilai a dan b, setelah itu masukkan nilai temp ke b
    temp = *a;
    *a = *b;
    *b = temp;
}