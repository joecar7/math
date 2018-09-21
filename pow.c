#include <stdio.h>

static inline unsigned long long po(unsigned long x, unsigned int n)
{
	unsigned long long v = 1;

	for ( ; n; n >>= 1, x *= x)
		if (n & 1)
			v *= x;
	return v;
}

int main(int  argc, char **argv)
{
	while (*argv && *++argv) {
		unsigned long x = strtoul(*argv, NULL, 10);
		unsigned long n = 1;

		if (*++argv)
			n = strtoul(*argv, NULL, 10);

		printf("%llu^%u=%llu\n", x, n, po(x, n));
	}

	return 0;
}
