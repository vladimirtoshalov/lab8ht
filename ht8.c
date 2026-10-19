#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, ".UTF8");
	int i;
	int n, k;
	double s;
	s = 0;
	i = 0;
	printf("Введите значение n и k через пробел\n");
	scanf("%d %d", &n, &k);
	for (i = 0; i <= n; i++) {
		s += pow(i, k);
	}
	printf("%lf", s);
}