#include <stdio.h>

void rotate_left(int *number, int bits)
{
	while (bits) {
		int bit = (*number) & (1 << 31);
		(*number) <<= 1;
		(*number) |= bit;
		bits--;
	}
	printf("%d\n", *number)
}

void rotate_right(int *number, int bits)
{
	while (bits) {
		int bit = (*number) & 1;
		(*number) >>= 1;
		(*number) |= (bit << 31);
		bits--;
	}
	printf("%d\n", *number);
}

int main()
{
	int n = 200;
	rotate_right(n, 3);
	return 0;
}

