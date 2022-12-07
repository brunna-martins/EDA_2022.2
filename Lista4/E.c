#include <stdio.h>
#define MAX 100000

void imprime(unsigned int vector[], int j)
{
    printf("%u\n", vector[j]);
}

void ultrapassa_minimamente(unsigned int *vector, int beginning, int size, int limit, int my_sum) 
{
    if(beginning==size) {
        return;
    }
    my_sum += vector[beginning];
    if (my_sum<=limit) {
        ultrapassa_minimamente(vector, beginning+1, size, limit, my_sum);
    } else {
        ultrapassa_minimamente(vector, beginning+1, size, limit, 0);
        imprime(vector, beginning);
    }
}

int main(void) {
    unsigned int v[MAX];
    int i, limite;

    for (i=0;i<MAX;i++) {
        scanf("%u", &v[i]);
        if (v[i]==0) {
            break;
        }
    }

    scanf("%d", &limite);

    ultrapassa_minimamente(v, 0, i, limite, 0);

    return 0;
}