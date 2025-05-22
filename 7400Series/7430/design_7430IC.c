#include <stdio.h>

typedef  int  INPUT;
typedef  int  OUTPUT;

OUTPUT do_NAND(INPUT I1, INPUT I2, INPUT I3, INPUT I4, INPUT I5, INPUT I6, INPUT I7, INPUT I8);

int main()
{
	INPUT I[8];

	printf("NAND 7430\n\n");
	printf("Please enter the values of 8-inputs! : ");
	scanf("%d %d %d %d %d %d %d %d", &I[0], &I[1], &I[2], &I[3], &I[4], &I[5], &I[6], &I[7]);
	printf("The output is %d\n", do_NAND(I[0], I[1], I[2], I[3], I[4], I[5], I[6], I[7]));

	return 0;
}

OUTPUT do_NAND(INPUT I1, INPUT I2, INPUT I3, INPUT I4, INPUT I5, INPUT I6, INPUT I7, INPUT I8)
{
	OUTPUT O;

	O = (~(I1 & I2 & I3 & I4 & I5 & I6 & I7 & I8)) & 0x0001;

	return O;
}
