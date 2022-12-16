#include <stdio.h>
#include <stdlib.h>

void insertion_sort(int nums[], int sizeof_nums, int pos[])
{
    int i, j, current_num, current_pos;

    for (i=1; i<sizeof_nums; i++)
    {
        current_num = nums[i];
        current_pos = pos[i];

        j = i - 1;
        while (j>=0 && nums[j] > current_num)
        {
            nums[j+1] = nums[j];
            pos[j+1] = pos[j];
            j--;
        }
        nums[j+1] = current_num;
        pos[j+1] = current_pos;
    }
}

int binary_search(int nums[], int l, int r, int my_num, int pos[])
{
    if (r >= l) 
    {
        int middle = l + (r - l) / 2;

        if (nums[middle] == my_num)
        {
            return pos[middle];
        }

        if (nums[middle] > my_num)
        {
            return binary_search(nums, l, middle - 1, my_num, pos);
        }

        return binary_search(nums, middle+1, r, my_num, pos);
    }

    return -1;
}

int main (void)
{
    char keyword[10000][16];
    int n, i, aux, result;

    scanf("%d", &n);

    int *instruction = calloc(n, sizeof(*instruction));
    int *pos = calloc(n, sizeof(*pos));

    for (i=0; i<n; i++)
    {
        scanf("%d", &instruction[i]);
        getchar();
        scanf("%s", keyword[i]);
        getchar();
        pos[i] = i;
    }

    insertion_sort(instruction, n, pos);

    while (1)
    {
        if (scanf("%d", &aux)!=1)
        {
            break;
        }
        else
        {
            result = binary_search(instruction, 0, n, aux, pos);
            if (result!=-1)
            {
                printf("%s\n", keyword[result]);
            }
            else 
            {
                printf("undefined\n");
            }
        }
    }
    return 0;
}