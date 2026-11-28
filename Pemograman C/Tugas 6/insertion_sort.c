#include "pengurutan.h"

// fungsi insertion ascend
void insertion_sort_asc(int data[], int jumlah) {
    // deklarasi variabel
    int i, j;

    // perulangan setiap putaran
    for (i = 1; i < jumlah; i++) {
        j = i;
        // menukar data ke kiri selama data kiri lebih besar
        while (j > 0 && data[j - 1] > data[j]) {
            swap(&data[j - 1], &data[j]);
            j--;
        }
    }
}

// fungsi insertion descend
void insertion_sort_desc(int data[], int jumlah) {
    // deklarasi variabel
    int i, j;

    // perulangan setiap putaran
    for (i = 1; i < jumlah; i++) {
        j = i;
        // menukar data ke kiri selama data kiri lebih kecil
        while (j > 0 && data[j - 1] < data[j]) {
            swap(&data[j - 1], &data[j]);
            j--;
        }
    }
}

