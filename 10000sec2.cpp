#include <stdio.h>

int main()
{
    int array[10000], max, i, j;

    // Dizi rastgele sayılarla oluşturuluyor
    for (i = 0; i < 10000; i++) {
        array[i] = rand();
    }

    // En büyük sayıyı bulmak için dizideki tüm elemanlar karşılaştırılıyor
    max = array[0];
    for (i = 0; i < 10000; i++) {
        for (j = i+1; j < 10000; j++) {
            if (array[j] > max) {
                max = array[j];
            }
        }
    }

    // Sonuç ekrana yazdırılıyor
    printf("En buyuk sayi: %d\n", max);

    return 0;
}
