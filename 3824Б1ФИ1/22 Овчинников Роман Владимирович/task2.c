#include <float.h>
// Задача 2. Дан непустой массив A, содержащий n вещественных чисел.
// Найти индексы k1 и k2 двух элементов массива, 
// расстояние |A[k1] – A[k2]| между которыми минимально.
// Если таких пар в массиве несколько, вернуть пару с наименьшими индексами.
// При невозможности найти пару, вернуть {-1,-1}.
struct Indices
{
	int first_index;
	int second_index;
};
struct Indices task2(double A[], size_t n)
{
	struct Indices indices = { -1, -1 };
	if (n > 1)
	{
		double m = 0.0, minim = DBL_MAX;
		for (int a = 0; a < n; a++)
		{
			if (a + 1 < n)
			{
				for (int b = a+1; b < n; b++)
				{
					m = A[a] - A[b];
					if (m < 0)
						m = -m;
					if (minim > m)
						minim = m;
				}
			}
		}
		for (int a = 0; a < n; a++)
		{
			if (a + 1 < n)
			{
				for (int b = a + 1; b < n; b++)
				{
					if (((A[a] - A[b]) == minim) || ((A[a] - A[b]) == -minim))
					{
						indices = { a, b };
						break;
					}
				}
			}
		}
		return indices;
	}
	else
		return indices;
}
