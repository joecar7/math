#include <stdio.h>

int main(int argc, char **argv)
{
	while (*++argv) {
		unsigned long n = strtoul(*argv, NULL, 10);
		unsigned long a = 0, b = 1, c;

		printf("%3lu:", n);
		while (a <= n) {
			printf(" %lu", a);
			c = a + b;
			a = b;
			b = c;
		}
		printf("\n");
	}

	return 0;
}

