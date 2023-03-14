#include <stdio.h>

double factorial_iter(int n) {
	double v=1, k;

	if (n <= 1) return 1;
	else {
		for (k = n; k > 0; k--) {
			v = v * k;
		}
	}
	
	return v;
}

double factorial_rec(int n) {
	if (n <= 1) return 1;
	else return n * factorial_rec(n - 1);
}

int main(void) {
	int n = 20;

	double result_iter = factorial_iter(n);
	double result_rec = factorial_rec(n);

	printf("Interative factorial result: %.0lf\n", result_iter);
	printf("Recursive factorial result: %.0lf", result_rec);
}