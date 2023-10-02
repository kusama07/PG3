#include <stdio.h>

int Recursive(int n) {
	if (n <= 1) {
		
		return (100);
	}

	return (Recursive(n - 1) * 2 - 50);
}

int general(int n) {

	return (n * 1072);
}

int main() {
	int n = 4;
	int result;

	result = Recursive(n);

	printf("%d時間働いたら = %d\n", n, result);

	return(0);
}