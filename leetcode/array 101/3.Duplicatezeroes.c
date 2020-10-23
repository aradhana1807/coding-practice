#include <stdio.h>

void duplicateZeros(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 0)
        {
            if (i + 1 != arrSize)
            {
                for (int j = arrSize - 1; j > i; j--)
                {
                    arr[j] = arr[j - 1];
                }
            }
            i++;
        }
        }
}

int main()
{
    int arr[8] = {1, 0, 2, 3, 0, 4, 5, 0};
    duplicateZeros(arr, 8);
}