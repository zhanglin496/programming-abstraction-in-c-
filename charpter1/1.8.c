
int main(int argc, char **argv)
{
	if (argc < 2)
		return -1;

	int num = atoi(argv[1]);
	int left;
	while (num != 0) {
		left = num % 10;
		num /= 10;
		printf("%d", left);
	}
	printf("\n");

}
