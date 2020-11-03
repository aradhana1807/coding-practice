void moveZeroes(int *nums, int numsSize)
{
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {

        if (nums[i] != 0)
        {
            nums[count++] = nums[i];
        }
    }

    for (int i = count; i < numsSize; i++)
    {
        nums[i] = 0;
    }

    for (int i = 0; i < numsSize; i++)
        printf("%d ", nums[i]);
}

int main()
{
    int nums[5] = {0, 1, 0, 3, 12};
    moveZeroes(nums, 5);
}
