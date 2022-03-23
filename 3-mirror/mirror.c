#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mirror(char *s)
{
	int len = strlen(s);
	char aux;
	for(int i = 0; i  < len / 2; i++) {
		aux = *( s + i);
		*(s + i) = *(s + len - i - 1);
		*(s + len - i -1) = aux;
	}
}

int main()
{
	char s[50] = "AnaAreMere";
	mirror(s);
	printf("%s", s);

	return 0;
}

