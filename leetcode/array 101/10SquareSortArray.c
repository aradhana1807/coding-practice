#include <stdio.h>

int *sortedSquares(int *A, int ASize, int *returnSize)
{

    *returnSize = ASize;
    int count;

    for (int i = 0; i < ASize; i++)
    {
        A[i] = A[i] * A[i];
    }

    for (int i = 0; i < ASize - 1; i++)
    {
        count = 0;
        for (int j = 0; j < ASize - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp;
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                count = 1;
            }
        }

        if (count == 0)
            break;
    }

    return A;
}