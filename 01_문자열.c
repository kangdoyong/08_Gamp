#include <stdio.h>
#include <string.h>
 
void main()
{
	// 배열 선언 시, 아래와 같은 초기화 가능
	int myArray[5] = { 1, 2, 3, 4, 5 };

	// 배열식별자는 배열의 첫번째 원소의 주소를 나타낸다.
	printf("myArray 주소 : %p \n", myArray);

	// 배열의 원소의 주소가 일정한 규칙을 갖고 늘어나므로
	// 첫번째 원소의 주소만 안다면, 전체 원소에 접근할 수 있다.
	for (int i = 0; i < 5; ++i)
		printf("myArray[%d] = %p \n", i, &myArray[i]);

	// 아래와 같은 방식은 불가능
	int myArray2[5];
	// myArray2 = { 1, 2, 3, 4, 5 };
	
	// 배열 식별자는 포인터 상수입니다.
	// 포인터 : 주소를 가지는 타입
	// 포인터 상수 : 가지는 주소 값을 변경할 수 없는 타입

	// myArray2[0]의 메모리 주소가 0x0000 일 경우
	// myArray2는 배열의 첫번째 원소의 주소 0x0000으로 고정됨
	// 상수 = { 1, 2, 3, 4, 5 }; <- 이미 값이 할당된 상수에 값을 대입하려는 행위

	// 아래와 같이 선언과 동시에 초기화 가능
	char myString[] = "Hello World";
	// 아래 같은 방식은 불가능
	// myString = "안녕";

	// strcpy(char* dest, const char* src);
	// dest : 문자열을 복사시켜 저장할 배열
	// src : 복사할 원본 문자열
	char myString2[128];
	strcpy(myString2, myString);

	printf("%s \n", myString2);
}