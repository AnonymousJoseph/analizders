#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main()
{
    int arr[10000];
    int n = sizeof(arr) / sizeof(arr[0]);

    // Dizi rastgele sayılarla doldurulur
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        arr[i] = rand();
    }

    clock_t t;
    t = clock();

    bubbleSort(arr, n);

    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("BubbleSort calisma suresi: %f saniye\n", time_taken);

    return 0;
}
