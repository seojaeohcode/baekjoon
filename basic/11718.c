
//테스트케이스의 종결은 EOF로 인식한다.

#include <stdio.h>

int main() {

	char c;

	while(scanf("%c", &c) != EOF) {
		printf("%c", c);
	}

	return 0;
}