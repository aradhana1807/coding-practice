#include<stdio.h>

int removeDuplicates(int* nums, int numsSize){
    int c[numsSize],temp;
    for(int i =0;i<numsSize;i++)
    {
        c[i]=nums[i];
    }
    for(int i=0;i<numsSize;i++)
    {
        for(int j=i+1;j<numsSize;j++)
        {
            if(c[j]<c[i])
            {
                temp=c[j];
                c[j]=c[j+1];
                c[j] = temp;
            }
        }
    }


}