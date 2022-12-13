#include <stdio.h>
#define swap_nums(x,y) {int z = x; x = y; y = z;}

void bubble_sort(int nums[], int sizeof_nums)
{
    int i, j;

    for (i=0; i<sizeof_nums-1; i++)
    {
        for (j=0; j<sizeof_nums - i - 1; j++)
        {
            if (nums[j] > nums[j + 1])
            {
                swap_nums(nums[j],nums[j+1]);
            }
        }
    }
}

void print_nums(int nums[], int sizeof_nums)
{
    int i;
    for (i=0; i<sizeof_nums; i++)
    {
        if (i==sizeof_nums-1)
        {
            printf("%d\n", nums[i]);
        }
        else
        {
            printf("%d ", nums[i]);
        }
    }
}

int main (void)
{
    int my_nums[1000] = {0};
    int i = 0;

    while (1)
    {
        if (scanf("%d", &my_nums[i])!=1)
        {
            break;
        }
        i++;
    }

    bubble_sort(my_nums, i);
    print_nums(my_nums, i);

    return 0;
}