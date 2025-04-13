#include <stdio.h>

typedef  int  INPUT;
typedef  int  OUTPUT;

OUTPUT do_NOR(INPUT I1, INPUT I2, INPUT I3);
OUTPUT do_NOT(INPUT I);

int main()
{
	int idx;

	for (idx = 0; idx < 2; ++idx) {
		printf("NOR 4000 %d\n\n", idx + 1);
		printf("%d%c : 0\t%d%c : 0\t%d%c : 0\tO%c : %d\n", idx + 1, idx + 65, idx + 2, idx + 65, idx + 3, idx + 65, idx + 65, do_NOR(0, 0, 0));
		printf("%d%c : 0\t%d%c : 0\t%d%c : 1\tO%c : %d\n", idx + 1, idx + 65, idx + 2, idx + 65, idx + 3, idx + 65, idx + 65, do_NOR(0, 0, 1));
		printf("%d%c : 0\t%d%c : 1\t%d%c : 0\tO%c : %d\n", idx + 1, idx + 65, idx + 2, idx + 65, idx + 3, idx + 65, idx + 65, do_NOR(0, 1, 0));
		printf("%d%c : 0\t%d%c : 1\t%d%c : 1\tO%c : %d\n", idx + 1, idx + 65, idx + 2, idx + 65, idx + 3, idx + 65, idx + 65, do_NOR(0, 1, 1));
		printf("%d%c : 1\t%d%c : 0\t%d%c : 0\tO%c : %d\n", idx + 1, idx + 65, idx + 2, idx + 65, idx + 3, idx + 65, idx + 65, do_NOR(1, 0, 0));
		printf("%d%c : 1\t%d%c : 0\t%d%c : 1\tO%c : %d\n", idx + 1, idx + 65, idx + 2, idx + 65, idx + 3, idx + 65, idx + 65, do_NOR(1, 0, 1));
		printf("%d%c : 1\t%d%c : 1\t%d%c : 0\tO%c : %d\n", idx + 1, idx + 65, idx + 2, idx + 65, idx + 3, idx + 65, idx + 65, do_NOR(1, 1, 0));
		printf("%d%c : 1\t%d%c : 1\t%d%c : 1\tO%c : %d\n\n\n", idx + 1, idx + 65, idx + 2, idx + 65, idx + 3, idx + 65, idx + 65, do_NOR(1, 1, 1));
	}

	printf("Inverter 4000 1\n\n");
	printf("IC : 0\tOC : %d\n", do_NOT(0));
	printf("IC : 1\tOC : %d\n\n\n", do_NOT(1));

	return 0;
}

OUTPUT do_NOR(INPUT I1, INPUT I2, INPUT I3)
{
	OUTPUT O;

	O = (~(I1 | I2 | I3)) & 0x0001;

	return O;
}

OUTPUT do_NOT(INPUT I)
{
	OUTPUT O;

	O = (~(I)) & 0x0001;

	return O;
}
