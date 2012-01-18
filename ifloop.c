#include <stdio.h>

/* 
 * many people think for-loops are bad
 * because they usually count from
 * zero to x-1 when they really want to
 * count from 1 to x.
 *
 * the if-loop solves this problem.
 *
 */

int main() {

	int x=0; forif: if (x++<10) {
		printf("%d\n", x);
		goto forif;
	}

	return 0;
}
