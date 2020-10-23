#include <stdio.h>

int removeElement(int *nums, int numsSize, int val)
{
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[count] = nums[i];
            count++;
        }
    }

    return count;
}

int main()
{
    int nums[4] = {4, 2, 2, 4};
    printf("%d", removeElement(nums, 4, 4));
}