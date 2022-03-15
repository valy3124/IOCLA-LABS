#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* delete_first(char *s, char *pattern)
{
	int i = 0;
	while(s[i]) {
		if(strncmp(s + i, pattern, sizeof(*pattern)) == 0) {
			strcpy(s + i, s + i + 2);
			return s;
		} else i++;
	}
return s;
}
int main(){
	char s[20] = "Ana are mere";
	char *pattern = "re";
	// Decomentati linia dupa ce ati implementat functia delete_first.
	printf("%s\n", delete_first(s, pattern));

	return 0;
}
