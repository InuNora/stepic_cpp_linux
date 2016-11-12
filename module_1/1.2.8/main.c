#include "solution.h"
#include <stddef.h>

int main()
{
    size_t multiplier = 1;
    int count = 0;
	int res = stringStat("Vasya", multiplier, &count);
	printf("Result: %d, count=%d\n", res, count);
	return 0;
}
