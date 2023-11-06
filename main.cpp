#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <functional>
#include <string>

typedef std::function<void(int*)> PFunc;

void CorrectGuess(int* s) {
	printf("当たっている\n");
}

void MissedGuess(int* s) {
	printf("間違っている\n");
}

void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);
	int timeInSeconds = second;
	p(&timeInSeconds);
}

void dice(std::function<void(bool*)> s) {
	char diceChecker[10];
	scanf_s("%s", &diceChecker, sizeof(diceChecker));

	int diceNum;
	diceNum = rand() % 6 + 1;

	bool ansFlag;

	if (((diceNum % 2 == 0) && strcmp(diceChecker, "偶数") == 0) ||
		((diceNum % 2 == 1) && strcmp(diceChecker, "奇数") == 0)) {
		ansFlag = true;
	}
	else {
		ansFlag = false;
	}

	printf("出目は%dデス", diceNum);

	s(&ansFlag);
}

int main() {
	PFunc rightAns;
	PFunc missedAns;

	bool ansFlag;

	rightAns = CorrectGuess;
	missedAns = MissedGuess;

	srand(time(0));

	printf("サイコロを振るので、奇数,偶数を予想し入力してください。\n");

	dice([&](bool* flag) {
		if (*flag) {
			setTimeout(rightAns, 3);
		}
		else {
			setTimeout(missedAns, 3);
		}
		});

	return 0;
}