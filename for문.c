#include <stdio.h>
int main() {
	int n, i,j,k;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++) {
		for (j = n-i; j >= 1; j--) {
			printf(" ");
		}
		for (k = 1; k<=(2*i-1); k ++) {
				printf("*");
			}
		printf("\n");
		}
	return 0;
	};
	