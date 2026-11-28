#include <stdio.h>
// include library pengurutan.h
#include "pengurutan.h"

// menampilkan judul dan bilangan ke layar atau ke file
void tampilkan(FILE *tujuan, char judul[], int data[], int jumlah) {
    // deklarasi variabel
    int i;

    // menulis tipe sorting dan nilainya kedalam file
    fprintf(tujuan, "%s\n", judul);

    // output ke file tujuan selama i kurang dari nilai jumlah
    for (i = 0; i < jumlah; i++) {
        fprintf(tujuan, "%d ", data[i]);
    }

    // membuat newline(\n) kedalam file
    fprintf(tujuan, "\n");
}

// menyalin isi array asal ke array hasil 
void salin(int asal[], int hasil[], int jumlah) {
    int i;

    for (i = 0; i < jumlah; i++) {
        hasil[i] = asal[i];
    }
}

int main(void) {
    int data[1000];    
    int urut[1000];    
    int jumlah = 0;
    FILE *fmasuk;
    FILE *fkeluar;

    // membaca bilangan dari file, satu bilangan per baris
    fmasuk = fopen("data.txt", "r"); // buka dan baca file data.txt
    if (fmasuk == NULL) {
        printf("File data.txt tidak bisa dibuka\n");
        return 1;
    }
    while (jumlah < 1000 && fscanf(fmasuk, "%d", &data[jumlah]) == 1) {
        jumlah++;
    }
    // tutup file data.txt
    fclose(fmasuk);

    fkeluar = fopen("luaran.txt", "w"); // buat dan tulis file luaran.txt
    if (fkeluar == NULL) {
        printf("File luaran.txt tidak bisa dibuat\n");
        return 1;
    }

    // bubble sort
    salin(data, urut, jumlah);
    bubble_sort_asc(urut, jumlah);
    tampilkan(stdout, "Bubble Sort (asc)", urut, jumlah);
    tampilkan(fkeluar, "Bubble Sort (asc)", urut, jumlah);

    salin(data, urut, jumlah);
    bubble_sort_desc(urut, jumlah);
    tampilkan(stdout, "Bubble Sort (desc)", urut, jumlah);
    tampilkan(fkeluar, "Bubble Sort (desc)", urut, jumlah);

    // selection sort 
    salin(data, urut, jumlah);
    selection_sort_asc(urut, jumlah);
    tampilkan(stdout, "Selection Sort (asc)", urut, jumlah);
    tampilkan(fkeluar, "Selection Sort (asc)", urut, jumlah);

    salin(data, urut, jumlah);
    selection_sort_desc(urut, jumlah);
    tampilkan(stdout, "Selection Sort (desc)", urut, jumlah);
    tampilkan(fkeluar, "Selection Sort (desc)", urut, jumlah);

    // insertion sort 
    salin(data, urut, jumlah);
    insertion_sort_asc(urut, jumlah);
    tampilkan(stdout, "Insertion Sort (asc)", urut, jumlah);
    tampilkan(fkeluar, "Insertion Sort (asc)", urut, jumlah);

    salin(data, urut, jumlah);
    insertion_sort_desc(urut, jumlah);
    tampilkan(stdout, "Insertion Sort (desc)", urut, jumlah);
    tampilkan(fkeluar, "Insertion Sort (desc)", urut, jumlah);
    
    // tutup file luaran.txt
    fclose(fkeluar);
    return 0;
}
