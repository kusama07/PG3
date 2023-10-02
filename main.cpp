#include <stdio.h>

template<typename Type>

Type min(Type a, Type b) {
	if (a < b) {

		return a;
	}
}

template<>

char min<char>(char a, char b) {
	return printf("数字以外代入できません");
	return 0;
}

int main() {

	printf("%d\n", min<int>(2, 4));
	printf("%f\n", min<float>(100.0f, 200.0f));
	printf("%lf\n", min<double>(100.12345, 200.12345));
	min<char>('a', 'b');

	return 0;
}