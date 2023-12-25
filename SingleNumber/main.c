#include <stdio.h>

int singleNumber(int* nums, int numsSize)
{
    int result = 0;
    for (int i = 0; i < numsSize; i++)
    {
        result ^= nums[i];
    }
    return result;
}

int main(void)
{
    int nums[] = {3, 7, 24, 3, 7};
    int numsSize = sizeof(nums) / sizeof(int);
    printf("%d\n", singleNumber(nums, numsSize));
}