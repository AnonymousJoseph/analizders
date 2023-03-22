#include <stdio.h>

int main()
{
    int array[10000], max, i;

    // Dizi rastgele sayılarla oluşturuluyor
    for (i = 0; i < 10000; i++) {
        array[i] = rand();
    }

    // En büyük sayıyı bulmak için dizi üzerinde bir kez geçiliyor
    max = array[0];
    for (i = 1; i < 10000; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    // Sonuç ekrana yazdırılıyor
    printf("En buyuk sayi: %d\n", max);

    return 0;
}

