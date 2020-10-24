#include <stdio.h>
#include <stdbool.h>

bool validMountainArray(int *A, int ASize)
{
    int length = ASize;
    int i = 0;

    while (i + 1 < length && A[i] < A[i + 1])
        i++;

    if (i == 0 || i == length - 1)
        return false;

    while (i + 1 < length && A[i] > A[i + 1])
        i++;
    return i == length - 1;
}

int main()
{
    int A[4] = {0, 3, 2, 0};
    printf("%d", validMountainArray(A, 4));
}