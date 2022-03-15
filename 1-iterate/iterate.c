#include <stdio.h>

/**
 * Afisati adresele elementelor din vectorul "v" impreuna cu valorile
 * de la acestea.
 * Parcurgeti adresele, pe rand, din octet in octet,
 * din 2 in 2 octeti si apoi din 4 in 4.
 */

int main() {
	int v[] = {0xCAFEBABE, 0xDEADBEEF, 0x0B00B135, 0xBAADF00D, 0xDEADC0DE};
	unsigned char *char_ptr = (unsigned char*)&v[0];
	unsigned int *int_ptr = (unsigned char*)&v[0];
	unsigned short *short_ptr = (unsigned char*)&v[0];
	printf("Afisare din octet in octet:\n ");
	while(*char_ptr) {
		printf("%p -> 0x%x\n", char_ptr, *char_ptr);
		char_ptr++;
	}
	printf("Afisare din 2 in 2:\n");
	while(*short_ptr) {
		printf("%p -> 0x%x\n", short_ptr, *short_ptr);
		short_ptr++;
	}
	printf("Afisare din 3 in 3");
	while(*int_ptr) {
		printf("%p -> 0x%x\n", int_ptr, *int_ptr);
		int_ptr++;
	}
    return 0;
}
