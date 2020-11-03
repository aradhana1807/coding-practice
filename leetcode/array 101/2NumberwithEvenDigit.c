#include <stdio.h>

int findNumbers(int *nums, int numsSize)
{
    int count = 0;

    for (int i = 0; i < numsSize; i++)
    {
        int digit = 0;
        while (nums[i] > 0)
        {
            digit++;
            nums[i] = nums[i] / 10;
        }

        if (digit % 2 == 0 && digit != 0)
            count++;
    }
    return count;
}

int main()
{
    int nums[5] = {12, 342, 2, 67896,0};
    printf("%d", findNumbers(nums, 5));
}