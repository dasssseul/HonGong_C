#include <stdio.h>


/* 2-3.*/
int main(void)
{
	printf("Be happy\n"); // "Be happy" 출력하고 줄바꿈(\n)
	printf("12345678901234567890\n"); // 화면에 열 번호 출력하고 줄바꿈(\n)
	printf("My\t friend\n"); // "my" 출력 후 탭 위치로 이동(\t), "friend" 출력하고 줄바꿈(\n)
	printf("Goot\bd chance\n"); // "Goot" 출력 후 왼쪽으로 한칸 이동(\b)후 t를 d로 바꾸고, "chance"  출력 후 줄바꿈(\n)
	printf("Cow\rW\a\n"); // "Cow" 출력 후 맨 앞으로 이동(\r)후, 벨소리(\a)내고 C를 W로 바꾸고 줄바꿈(\n)

	return 0; // 
}
