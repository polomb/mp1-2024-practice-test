#include <string.h>
// Задача 3. Дана строка s. Подсчитать количество содержащихся в ней цифр.
size_t task3(char* s)
{
	unsigned long long len = strlen(s);
	unsigned long long k = 0;
	for (unsigned long long i = 0; i < len; i++)
	{
		if ((s[i] >= '0' && s[i] <= '9'))
			k++;
	}
	return k;
}
