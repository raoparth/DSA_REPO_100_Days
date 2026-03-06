#include <stdio.h>

int main()
{
    int nums[] = {0, 1, 0, 3, 12};
    int n = sizeof(nums) / sizeof(nums[0]);
    int i, j = 0, temp;

    for(i = 0; i < n; i++)
    {
        if(nums[i] != 0)
        {
            temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            j++;
        }
    }

    printf("Array after moving zeros to end:\n");
    for(i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }

    return 0;
}
