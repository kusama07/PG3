#include <stdio.h>
#include <windows.h>
#include <time.h>

typedef void (*PFunc)(int*);
typedef void (*DFunc)(bool *);

void DispResult(int* s) {
	printf("当たっている\n", *s);
}

void No(int* s) {
	printf("間違っている\n", *s);
}

void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);

	p(&second);
}

void dice(bool s,bool b) {

	char diceChacker;
	scanf_s("%s", &diceChacker);

	if (diceChacker == '丁') {
		s = true;
	}
	else if (diceChacker == '半') {
		s = false;
	}
	else {
		printf("丁,半で入力してください", s);
	}

	int diceNum;
	diceNum = rand() % 6 + 1;

	if (diceNum % 2 == 0) {
		b = true;
	}
	else {
		b = false;
	}

	
}

void isAns(int *s) {
}

int main() {
	PFunc t;
	PFunc f;

	DFunc a;
	DFunc b;
	
	t = DispResult;
	f = No;
	
	printf("サイコロを振るので、半(奇数),丁(偶数)を予想し入力してください。\n");

	dice(a, b);

	if (a == b) {
		setTimeout(t, 3);

	}
	else {
		setTimeout(f, 3);
	}

	return 0;
}