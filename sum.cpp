#include "sum.h"

int sum(int begin, int end)
{
	int result = 0;
	for (int i = begin; i <= end; i++)
	{
		result += i;
	}
	return result;
}  
