#include "main.h"

data_t selection(data_t *arr, data_t size)
{
        int Cmin, Citem;
        for (int j = 0; j < size - 1; j++)
        {
                Cmin = j;
                for (Citem = j + 1; Citem < size; Citem++) // Fix loop iteration variable
                {
                        if (arr[Citem] < arr[Cmin])
                                Cmin = Citem;
                }
                if (Cmin != j)
                {
                        int temp = arr[j];
                        arr[j] = arr[Cmin]; // Fix swapping
                        arr[Cmin] = temp;
                }
        }
}

