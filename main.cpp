#include <stdio.h>

int Recursive(int n) {

	if (n <= 1) {
		return (100);
	}

	return (Recursive(n - 1) * 2 - 50);
}

int General(int n) {

	return (n * 1072);
}

int main() {
	int n = 12;
	int result;
	int generalResult;

	result = Recursive(n);
	generalResult = General(n);

	printf("一般的:%d時間働いたら = %d\n", n, generalResult);
	printf("再帰的:%d時間働いたら = %d\n", n, result);

	return(0);
}