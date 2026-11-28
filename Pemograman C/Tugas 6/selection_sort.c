#include "pengurutan.h"

// fungsi selection sort ascend
void selection_sort_asc(int data[], int jumlah) {
    // deklarasi variabel
    int i, j, posisi;
    
    // perulangan disetiap putaran
    for (i = 0; i < jumlah - 1; i++) {
        // posisi data yang paling kecil
        posisi = i;   

        // perulangan dalam 1 putaran
        for (j = i + 1; j < jumlah; j++) {
            // jika data dengan indeks j lebih kecil dari nilai data dengan indeks posisi maka ubah nilai posisi
            if (data[j] < data[posisi]) {
                posisi = j;
            }
        }
        // menukar data ke-i dengan data yang paling kecil 
        swap(&data[i], &data[posisi]);
    }
}

// fungsi insertion sort descend
void selection_sort_desc(int data[], int jumlah) {
    // deklarasi variabel
    int i, j, posisi;

    // perulangan disetiap putaran
    for (i = 0; i < jumlah - 1; i++) {
        // posisi data yang paling besar 
        posisi = i;

        // perulangan dalam 1 putaran
        for (j = i + 1; j < jumlah; j++) {
            // jika data dengan indeks j lebih besar dari nilai data dengan indeks posisi maka ubah nilai posisi
            if (data[j] > data[posisi]) {
                posisi = j;
            }
        }
        // menukar data ke-i dengan data yang paling kecil
        swap(&data[i], &data[posisi]);
    }
}