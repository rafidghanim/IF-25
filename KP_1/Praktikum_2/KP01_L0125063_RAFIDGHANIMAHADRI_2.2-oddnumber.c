#include <stdio.h>

int main() {
	int inpt;
	scanf("%d",&inpt);
	for (int i = 0;i < inpt;i++) {
		if (i % 2 == 0) {
			continue;
		}
		printf("%d\n",i);
	}
}
