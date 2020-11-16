#include <stdio.h>

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n)
{
  int i, j, temp;
  int sort[nums1Size];
  i = j = 0;
  if (nums1Size == 0 && nums2Size == 0)
  {
    return;
  }

  for (i = 0; i < m; i++)
  {
    sort[i] = nums1[i];
  }

  for (i = m, j = 0; i < nums1Size; i++, j++)
  {
    sort[i] = nums2[j];
  }

  for (i = 0; i < nums1Size; i++)
  {
    for (j = 0; j < nums1Size - i; j++)
    {
      if (sort[j] > sort[j + 1])
      {
        temp = sort[j];
        sort[j] = sort[j + 1];
        sort[j + 1] = temp;
      }
    }
  }

  for (i = 0; i < nums1Size; i++)
  {
    printf("%d  ", sort[i]);
  }
}

int main()
{
  int nums1[6] = {1, 2, 3};
  int nums2[3] = {4, 5, 6};
  merge(nums1, 6, 3, nums2, 3, 3);
}