// Задача 1. Дан непустой массив A, содержащий n натуральных чисел.
// Вернуть 1, если его элементы образуют арифметическую прогрессию,
// иначе вернуть 0.
int task1(unsigned A[], size_t n)
{
	if (n > 1)
	{
		unsigned int a = A[1] - A[0], b = 0; char flag = 1;
		for (int i = 0; i < n-1; i++)
		{
			b = A[i + 1] - A[i];
			if (a != b)
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			return 1;
		else
			return 0;
	}
	else
	{
		return 0;
	}
}
