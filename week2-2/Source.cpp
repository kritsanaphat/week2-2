#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
int main() {
	char x[10000];
	int i, y, j = 1;
	scanf("%[^\n]", x);
	y = strlen(x);
	for (i = 0; i < y; i++) {
		if ((x[i] >= 65 && x[i] <= 90) || x[i] >= 97 && x[i] <= 122) {
			j = j * 1;

		}
		else {
			j = j * 0;
		}
	}
	if (j == 1) {
		for (i = 0; i < y; i++) {
			if (x[i] >= 65 && x[i] <= 90) {
				printf("%c", x[i] + 32);
			}
			else if (x[i] >= 97 && x[i] <= 122) {
				printf("%c", x[i] - 32);
			}
		}
	}
	else printf("Error");
}