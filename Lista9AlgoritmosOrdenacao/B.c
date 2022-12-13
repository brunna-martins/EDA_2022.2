#include <stdio.h>
#define swap_nums(x,y) {int z = x; x = y; y = z;}

void selection_sort(int nums[], int sizeof_nums)
{
    int i, j, index_minimum;

    for (i=0; i<sizeof_nums-1; i++)
    {
        index_minimum = i;
        for (j=i+1; j<sizeof_nums; j++)
        {
            if (nums[j] < nums[index_minimum])
            {
                index_minimum = j;
            }
        }
        if (index_minimum!=i)
        {
            swap_nums(nums[index_minimum],nums[i]);
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

    selection_sort(my_nums, i);
    print_nums(my_nums, i);

    return 0;
}