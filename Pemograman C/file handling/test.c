#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *fp = fopen("data_mahasiswa.txt", "r");

    if (fp == NULL) {
        perror("Error saat membuka file");
        return EXIT_FAILURE;
    }

    printf("File berhasil dibuka dan siap dibaca.");

    if (fclose(fp) == EOF) {
        perror("Error saat menutup file");
        return EXIT_FAILURE;
    }
    
    return 0;
}