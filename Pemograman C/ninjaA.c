#include <stdio.h>

int main () {
    int N;
    int isPrima;
    scanf("%d", &N);

    for(int i = 2; i <= N; i++) {
        isPrima = 1;

        for ( int j = 2; j < i; j++ ){
            if (i % j == 0){
                isPrima = 0;
                break;
            }
        }

    if (isPrima == 1) {
        printf("Gulungan ke-%d\n", i);
    }
}
}