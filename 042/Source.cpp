#include <stdio.h>
int main() {
	int b;
	double s;
	scanf_s("%d", &b);
	if (b>=32) {
		s = (5 * (b - 32.0)) / 9;
			printf("%.2f", s);
	}
	else {
		printf("Too cold to live");
	}
}