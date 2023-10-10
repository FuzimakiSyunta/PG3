#include<stdio.h>

int Recursive(int n) {
	if (n <= 60)
	{
		return(1);
	}
	return(n * Recursive(n - 1));
}
int main() {
	int n = 100;
	int result;

	result = Recursive(n);
	printf("%dの階乗=%d\n", n, result);

	return(0);
}
