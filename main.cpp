#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <functional>
#include <string>

typedef std::function<void(int*)> PFunc;
typedef std::function<void(bool*)> DiceFunc;

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

void dice(DiceFunc s) {
    char diceChecker[10];
    scanf_s("%s", &diceChecker, sizeof(diceChecker));

    int diceNum;
    diceNum = rand() % 6 + 1;

    bool isCorrect;

    if (((diceNum % 2 == 0) && strcmp(diceChecker, "偶数") == 0) ||
        ((diceNum % 2 == 1) && strcmp(diceChecker, "奇数") == 0)) {
        isCorrect = true;
    }
    else {
        isCorrect = false;
    }

    printf("出目は%dデス\n", diceNum);

    s(&isCorrect);
}

int main() {
    PFunc rightAns;
    PFunc missedAns;

    rightAns = CorrectGuess;
    missedAns = MissedGuess;

    srand(time(0));

    printf("サイコロを振るので、奇数,偶数を予想し入力してください。\n");

    DiceFunc diceResult = [&](bool* isCorrect) {
        if (*isCorrect) {
            setTimeout(rightAns, 3);
        }
        else {
            setTimeout(missedAns, 3);
        }
    };

    dice(diceResult);

    return 0;
}