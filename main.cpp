#include <stdio.h>

int CalcRecursiveSalary(int n, int result = 100) {

	if (n <= 1) {
		return (result);
	}

	return (result + CalcRecursiveSalary(n - 1, result * 2 - 50));
}

int CalcGeneralSalary(int n) {

	return (n * 1072);
}

int main() {
	int n = 8;
	int result;
	int generalResult;

	result = CalcRecursiveSalary(n);
	generalResult = CalcGeneralSalary(n);

	printf("一般的:%d時間働いたら = %d\n", n, generalResult);
	printf("再帰的:%d時間働いたら = %d\n", n, result);

	return(0);
}