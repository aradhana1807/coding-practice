#include <stdio.h>

int heightChecker(int *heights, int heightsSize)
{
    int i, j;
    int count = 0;
    int len = heightsSize;
    int heights1[len];

    for (i = 0; i < heightsSize; i++)
    {
        for (j = 0; j < heightsSize - i; j++)
        {
            if (heights1[j] > heights1[j + 1])
            {
                heights1[j] = heights1[j + 1];
                count++;
            }
        }
    }

    return count;
}

int main()
{
    int h[5] = {1, 2, 3, 4, 5};
    printf("%d", heightChecker(h, 5));
}