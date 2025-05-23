#include <stdio.h>

typedef  int  INPUT;
typedef  int  OUTPUT;

OUTPUT do_NAND(INPUT I1, INPUT I2, INPUT I3, INPUT I4);

int main()
{
	int idx;

	for (idx = 0; idx < 2; ++idx) {
		printf("NAND 7418 %d\n\n", idx + 1);
		printf("A%d : 0\tB%d : 0\tC%d : 0\tD%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(0, 0, 0, 0));
		printf("A%d : 0\tB%d : 0\tC%d : 0\tD%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(0, 0, 0, 1));
		printf("A%d : 0\tB%d : 0\tC%d : 1\tD%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(0, 0, 1, 0));
		printf("A%d : 0\tB%d : 0\tC%d : 1\tD%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(0, 0, 1, 1));
		printf("A%d : 0\tB%d : 1\tC%d : 0\tD%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(0, 1, 0, 0));
		printf("A%d : 0\tB%d : 1\tC%d : 0\tD%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(0, 1, 0, 1));
		printf("A%d : 0\tB%d : 1\tC%d : 1\tD%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(0, 1, 1, 0));
		printf("A%d : 0\tB%d : 1\tC%d : 1\tD%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(0, 1, 1, 1));
		printf("A%d : 1\tB%d : 0\tC%d : 0\tD%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(1, 0, 0, 0));
		printf("A%d : 1\tB%d : 0\tC%d : 0\tD%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(1, 0, 0, 1));
		printf("A%d : 1\tB%d : 0\tC%d : 1\tD%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(1, 0, 1, 0));
		printf("A%d : 1\tB%d : 0\tC%d : 1\tD%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(1, 0, 1, 1));
		printf("A%d : 1\tB%d : 1\tC%d : 0\tD%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(1, 1, 0, 0));
		printf("A%d : 1\tB%d : 1\tC%d : 0\tD%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(1, 1, 0, 1));
		printf("A%d : 1\tB%d : 1\tC%d : 1\tD%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(1, 1, 1, 0));
		printf("A%d : 1\tB%d : 1\tC%d : 1\tD%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, idx + 1, idx + 1, do_NAND(1, 1, 1, 1));
	}

	return 0;
}

OUTPUT do_NAND(INPUT I1, INPUT I2, INPUT I3, INPUT I4)
{
	OUTPUT O;

	O = (~(I1 & I2 & I3 & I4)) & 0x0001;

	return O;
}
