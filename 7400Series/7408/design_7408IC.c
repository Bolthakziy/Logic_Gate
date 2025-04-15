#include <stdio.h>

typedef  int  INPUT;
typedef  int  OUTPUT;

OUTPUT do_AND(INPUT I1, INPUT I2);

int main()
{
	    int idx;

	    for (idx = 0; idx < 4; ++idx) {
		    printf("AND 7408 %d\n\n", idx + 1);
		    printf("A%d : 0\tB%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, do_AND(0, 0));
		    printf("A%d : 0\tB%d : 1\tY%d : %d\n", idx + 1, idx + 1, idx + 1, do_AND(0, 1));
		    printf("A%d : 1\tB%d : 0\tY%d : %d\n", idx + 1, idx + 1, idx + 1, do_AND(1, 0));
		    printf("A%d : 1\tB%d : 1\tY%d : %d\n\n\n", idx + 1, idx + 1, idx + 1, do_AND(1, 1));
	    }

	    return 0;
}

OUTPUT do_AND(INPUT I1, INPUT I2)
{
	    OUTPUT O;

	    O = (I1 & I2) & 0x0001;

	    return O;
}