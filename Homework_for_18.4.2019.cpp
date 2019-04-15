#include <stdio.h>
int a = 0;
int count() {
	int c = a;
	a = ++c;
	return c;
}
int main() {
	printf("%d\n", count());
	printf("%d\n", count());
	printf("%d\n", count());
	return 0;
}