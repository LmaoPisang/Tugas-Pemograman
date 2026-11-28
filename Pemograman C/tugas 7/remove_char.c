#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    while (argc != 4) {
        printf("argument salah\n");
        return EXIT_FAILURE;
        }

    FILE *fileMasuk = fopen(argv[1], "r");

    if (fileMasuk == NULL) {
    perror("Error saat membaca file");
    return EXIT_FAILURE;
    }
    FILE *fileKeluar = fopen(argv[2], "w");
    if (fileKeluar == NULL) {
    perror("Error saat membuka file");
    return EXIT_FAILURE;
    int i;
    char charGanti = argv[3];
    while (i = fgetc(fileMasuk) != EOF) {
        if ((char)i != charGanti) {
            fputc(i, fileKeluar);
        }
    }
}