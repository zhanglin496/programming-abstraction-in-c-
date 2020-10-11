int main(int argc, char **argv)
{
	int i;
	int sum = 0;
	if (argc < 2)
		return -1;

	for (i = 0; i < atoi(argv[1]); i++) {
		sum += 2*i + 1;
	}

	printf("sum=%d\n", sum);
}
