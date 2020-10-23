#include <stdio.h>

int findMaxConsecutiveOnes(int *nums, int numsSize)
{
    int count = 0;
    int max = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == 1)
        {
            count++;
            if (i == numsSize - 1 && max < count)
            {
                max = count;
            }
        }
        else
        {
            if (max < count)
            {
                max = count;
            }
            count = 0;
        }
    }

    return max;
}

int main()
{
    int nums[6] = {1, 0, 1, 1, 0, 1};
    printf("%d", findMaxConsecutiveOnes(nums, 6));
}
