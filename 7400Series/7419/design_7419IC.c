#include <stdio.h>

typedef  int  INPUT;
typedef  int  OUTPUT;

OUTPUT do_NOT(INPUT I);

int main()
{
	int idx;

	for (idx = 0; idx < 6; ++idx) {
		printf("Inverter 7419 %d\n\n", idx + 1);
		printf("A%d : 0\tY%d : %d\n", idx + 1, idx + 1, do_NOT(0));
		printf("A%d : 1\tY%d : %d\n\n\n", idx + 1, idx + 1, do_NOT(1));
	}

	return 0;
}

OUTPUT do_NOT(INPUT I)
{
	OUTPUT O;

	O = (~I) & 0x0001;

	return O;
}
