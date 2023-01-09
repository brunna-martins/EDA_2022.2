#include <stdio.h>
#include <stdlib.h>

void exch(int a, int b)
{
	int aux = a;
	a = b;
	b = aux;
	return;
}

int partition(int *v, int r, int l)
{
	int i, j, pivot = v[r];
	int size = r - l + 1; // intervalo fechado
	int *smaller = malloc(sizeof(int)*size);
	int *bigger = malloc(sizeof(int)*size);
	int is = 0, ib = 0;
	for (i = l; i < r; i++)
	{
		if (v[i]<=pivot)
		{
			smaller[is] = v[i];
			is++;
		}
		else
		{
			bigger[ib] = v[i];
			ib++;
		}
	}
	i = l;
	for (j = 0; j < is; j++)
	{
		v[i] = smaller[j];
		i++;
	}
	v[i] = pivot;
	int pivotpos = i;
	i++;
	for (j = 0; j < ib; j++)
	{
		v[i] = bigger[j];
		i++;
	}
	free(smaller), free(bigger);
	return pivotpos;
}

// otimizada
int partition_variant (int *v, int l, int r)
{
	int pivot = v[r];
	int j = l, k, aux;
	for (k = l; k < r; k++)
	{
		if (v[k]<=pivot)
		{
			exch(v[k], v[j]);
			j++;
		}
	}
	
	exch(v[j], v[r]);
	return j; // posição do pivot
}

int main(void)
{
	
	return 0;
}
