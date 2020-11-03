#include <stdio.h>
#include <stdbool.h>

bool checkIfExist(int *arr, int arrSize)
{
    for (int i = 0; i < arrSize; i++)
    {
        for (int j = 0; j < arrSize; j++)
        {
            if (i != j)
            {
                if (arr[i] % 2 == 0)
                {

                    if (arr[i] == 2 * arr[j])
                        return true;
                }
            }
        }
    }

    return false;
}
int main()
{
    int nums[4] = {7, 1, 14, 11};
    printf("", checkIfExist(nums, 4));
}