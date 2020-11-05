#include <stdio.h>
#include <limits.h>

int thirdMax(int *nums, int numsSize)
{
    int n = numsSize;
    int count = 0;
    int max = nums[0], i, smax = INT_MIN, tmax = INT_MIN;

    for (i = 0; i < numsSize; i++)
    {
        if (nums[i] > max)
        {
            max = nums[i];
        }
    }

    for (i = 0; i < numsSize; i++)
    {
        if ((nums[i] > smax) && (nums[i] < max))
        {
            smax = nums[i];
        }
    }

    for (i = 0; i < numsSize; i++)
    {
        if ((nums[i] >= tmax) && (nums[i] < smax))
        {
            tmax = nums[i];
            count++;
        }
    }

    if (tmax == INT_MIN)
    {
        if (count != 0)
        {
            return tmax;
        }
        tmax = max;
    }

    return tmax;
}

int main()
{
    int nums[3] = {3, 2, -1};
    printf("%d", thirdMax(nums, 3));
}