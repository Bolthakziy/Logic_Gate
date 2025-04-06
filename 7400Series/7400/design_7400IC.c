#include <stdio.h>

typedef  int  INPUT;
typedef  int  OUTPUT;

typedef struct NAND
{
	INPUT A;
	INPUT B;
	OUTPUT Y;
} nand;

OUTPUT do_NAND(INPUT I1, INPUT I2);

int main()
{
	nand IC_7400[4];
	int idx;

	for (idx = 0; idx < 4; ++idx) {
		printf("NAND %d\n\n", idx + 1);
		printf("A%d : 0\tB%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, do_NAND(0, 0));
		printf("A%d : 0\tB%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, do_NAND(0, 1));
		printf("A%d : 1\tB%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, do_NAND(1, 0));
		printf("A%d : 1\tB%d : 1\tY%d : %d\n\n\n", idx + 1, idx + 1, idx + 1, do_NAND(1, 1));
	}

	return 0;
}

OUTPUT do_NAND(INPUT I1, INPUT I2)
{
	OUTPUT O;

	O = (~(I1 & I2)) & 0x0001;

	return O;
}
