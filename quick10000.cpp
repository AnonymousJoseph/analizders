#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high)
{
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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

    quickSort(arr, 0, n - 1);

    t = clock() - t;
    double time_taken = ((double)t) / CLOCKS_PER_SEC;
    printf("QuickSort calisma suresi: %f saniye\n", time_taken);

    return 0;
}
