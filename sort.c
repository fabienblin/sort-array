#define SIZE 5

#include <stdio.h>

void sort (int * array, int n);
void putarray (int * array, int n);
void swap (int * x, int * y);

int main (int argc, int * argv)
{
	int n = SIZE;
	int array [SIZE] = {0,0,0,0,0};
	sort(array, n);
	putarray(array, n);
	return 0;	
}

void putarray (int * array, int n)
{
	int i = 0;
	while(i < n)
	{
		printf("%d ", array[i]);
		i++;
	}
	printf("\n");
}

void swap (int * x, int * y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

void sort (int * array, int n)
{
	if (n > 1)
	{
		int i = 0;

		while (i < n - 1)
		{
			if (array[i] > array[i + 1])
			{
				swap (array + i, array + i + 1);
			}
			else if (array[i] == array[i + 1])
			{
				n--;
			}
			i++;
			putarray(array, n);
		}
		sort (array, n - 1);
	}
}
