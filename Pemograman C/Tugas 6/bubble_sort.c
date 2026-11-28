#include "pengurutan.h"

// metode pengurutan bubble sort ascend
void bubble_sort_asc(int data[], int jumlah) {
    // deklarasi variabel
    int i, j;

    // perulangan untuk setiap putaran
    for (i = 0; i < jumlah - 1; i++) {
        // perulangan untuk membandingkan nilai dalam satu putaran
        for (j = 0; j < jumlah - 1 - i; j++) {
            // kondisi jika nilai saat ini lebih besar daripada selanjutnya jalankan fungsi swap
            if (data[j] > data[j + 1]) {
                swap(&data[j], &data[j+1]);
            }
        }
    }
}

// metode pengurutan bubble sort descend
void bubble_sort_desc(int data[], int jumlah) {
    // deklarasi variabel
    int i, j;

    // perulangan untuk membandingkan nilai dalam satu putaran
    for (i = 0; i < jumlah - 1; i++) {
        // perulangan untuk membandingkan nilai dalam satu putaran
        for (j = 0; j < jumlah - 1 - i; j++) {
            // kondisi jika nilai saat ini lebih kecil daripada selanjutnya jalankan fungsi swap
            if (data[j] < data[j + 1]) {
                swap(&data[j], &data[j+1]);
            }
        }
    }
}
