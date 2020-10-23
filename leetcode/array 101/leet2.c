#include<stdio.h>

int findNumbers(int* nums, int numsSize){
    int count = 0;

    for(int i=0;i<numsSize;i++)
    {
        int digit = 0;
        while(nums[i]>0)
        {
            digit++;
            nums[i]=nums[i]/10;
        }

        if(digit%2 == 0)
        count++;
    }
    return count;   
}

int main()
{
    int nums[4] ={12, 342,2,67896};
    printf("%d", findNumbers(nums, 4));
}