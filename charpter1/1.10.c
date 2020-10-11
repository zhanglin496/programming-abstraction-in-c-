#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc < 2)
		return -1;
	int num = atoi(argv[1]);
	if (num <= 0)
		return -1;

	while (1) {
		if (num == 1)
			break;
		if (num % 2 == 0)
			num /= 2;
		else
			num = num*3 + 1;
		printf("num=%d\n", num);
	}
	return 0;
}
