#include <stdio.h>

int *sortArrayByParity(int *A, int ASize, int *returnSize)
{
    *returnSize = ASize;
    int count = 0;
    int i = 0;
    while (i < ASize)
    {
        if (A[i] % 2 == 0)
        {
            int temp = A[count];
            A[count] = A[i];
            count++;
            A[i] = temp;
        }

        i++;
    }

    return A;
}