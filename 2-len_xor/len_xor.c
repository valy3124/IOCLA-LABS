#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_strlen(const char *str)
{
	int a = 0;
	while(*str != '\0') {
		a++;
		str++;
	}
	return a;
}

void equality_check(const char *str)
{
	int len;
	len = my_strlen(str);
	for(int i = 0; i < len; i++) {
		//if( a) = if(a != 0)
		if((*(str+i) ^ *(str + ( i + 2*i) % len)) == 0)
			printf("Adress of %c : %p  ", *(str + i), str + i);
	}
}

int main(void)
{
	char s[30] = "ababababacccbacbacbacbacbabc";
	printf("Lungimea este: %d\n", my_strlen(s));
	equality_check(s);
	return 0;
}

