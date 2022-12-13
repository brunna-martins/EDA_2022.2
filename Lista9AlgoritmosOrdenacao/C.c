#include <stdio.h>

void insertion_sort(int nums[], int sizeof_nums)
{
    int i, j, current_num;

    for (i=1; i<sizeof_nums; i++)
    {
        current_num = nums[i];
        j = i - 1;
        while (j>=0 && nums[j] > current_num)
        {
            nums[j+1] = nums[j];
            j--;
        }
        nums[j+1] = current_num;
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
    int my_nums[50000] = {0};
    int i = 0;

    while (1)
    {
        if (scanf("%d", &my_nums[i])!=1)
        {
            break;
        }
        i++;
    }

    insertion_sort(my_nums, i);
    print_nums(my_nums, i);

    return 0;
}