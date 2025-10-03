#include <stdio.h>

int main() {
	char string[64];
	fgets(string,sizeof(string),stdin);
	printf("\n%s\n",string);
}
