#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function prototypes
void insertion_sort(int arr[], int n);
void merge_sort(int arr[], int l, int r);
void merge(int arr[], int l, int m, int r);
double measure_sorting_time(void (*sort_func)(int[], int), int arr[], int n);
void generate_array(int arr[], int n);

// Insertion Sort
void insertion_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Merge Sort
void merge_sort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;

        merge_sort(arr, l, m);
        merge_sort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int L[n1], R[n2];

    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Measure time for sorting
double measure_sorting_time(void (*sort_func)(int[], int), int arr[], int n)
{
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    sort_func(arr, n);
    end = clock();

    cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

    return cpu_time_used;
}

// Generate random array for testing
void generate_array(int arr[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 1000;
    }
}

// Main function to test both sorting algorithms
int main()
{
    int sizes[] = {10, 20, 40, 60, 80, 100};
    int num_sizes = sizeof(sizes) / sizeof(sizes[0]);

    void (*algorithms[2])(int[], int) = {insertion_sort, merge_sort};
    char *names[2] = {"Insertion Sort", "Merge Sort"};

    for (int i = 0; i < num_sizes; i++)
    {
        int size = sizes[i];
        int *arr = malloc(size * sizeof(int)); // allocate memory for array

        printf("\nTesting for %d elements:\n", size);
        generate_array(arr, size);

        for (int j = 0; j < 2; j++)
        {
            int *arr_copy = malloc(size * sizeof(int)); // allocate memory for array copy
            memcpy(arr_copy, arr, size * sizeof(int));  // copy original array to array copy

            double execution_time = measure_sorting_time(algorithms[j], arr_copy, size);
            printf("%s executed in %f seconds.\n", names[j], execution_time);

            free(arr_copy); // free memory allocated for array copy
        }

        free(arr); // free memory allocated for array
    }

    return 0;
}
