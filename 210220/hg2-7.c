#include <stdio.h>

//문자는 작은따옴표로 묶고, 문자열은 큰따옴표로 묶기
//문자는 %c, 문자열은 %s 변환 문자를 사용한다

int main(void)
{
	printf("%c\n", 'A'); //문자 상수 출력
	printf("%s\n", "A"); //문자열 상수 출력
	printf("%c은 %s입니다.\n", '1', "first"); //문자(%c)와 문자열(%s)을 함께 출력

	return 0;
}
