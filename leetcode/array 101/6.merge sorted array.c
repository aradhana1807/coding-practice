

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    
    int length = nums1Size + nums2Size;
    int c[length],temp;
    for(int i=0;i<nums1Size;i++)
    {
        c[i]=nums1[i];
    }

     for(int i= nums1Size, j=0;j<length;j++)
    {
        c[j]=nums2[j];
    }

    for(int i=0;i<length;i++)
    {
        for(int j=0;j<9-i;j++)
        {
            if(c[j]>c[j+1])
            {
                temp=c[j];
                c[j]=c[j+1];
            }
        }
    }

    

}