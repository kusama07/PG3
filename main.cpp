#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

typedef void (*PFunc)(int*);

void DispResult(int* s) {
	printf("当たっている\n");
}

void No(int* s) {
	printf("間違っている\n");
}

void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);

	p(&second);
}

void dice(bool *s) {

	char diceChecker[10];
	scanf_s("%s", &diceChecker, sizeof(diceChecker));

	int diceNum;
	diceNum = rand() % 6 + 1;

	if (((diceNum % 2 == 0) && strcmp(diceChecker, "偶数") == 0) ||
		((diceNum % 2 == 1) && strcmp(diceChecker, "奇数") == 0)) {
		*s = true;
	}
	else {
		*s = false;
	}

	printf("出目は%dデス", diceNum);

}

int main() {
	PFunc t;
	PFunc f;
	
	bool a;

	t = DispResult;
	f = No;
	
	srand(time(0));

	printf("サイコロを振るので、奇数,偶数を予想し入力してください。\n");

	dice(&a);

	if (a) {
		setTimeout(t, 3);

	}
	else {
		setTimeout(f, 3);
	}

	return 0;
}