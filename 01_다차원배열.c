#include <stdio.h>

// 다차원 배열이란?
// 배열을 원소로 갖는 배열을 의미
// 1차원 배열을 원소로 갖는 배열을 2차원 배열
// 2차원 배열을 원소로 갖는 배열을 3차원 배열

void main()
{
	// 2차원 배열
	// 각각의 원소가 1차원 배열을 하나씩 갖습니다.
	// 변수식별자 [2차원 길이][1차원 길이
	// 
	// 길이가 4인 배열을 원소로 3개 갖는 2차원 배열을 선언
	int myArray[3][4];
	// [ㅁㅁㅁㅁ]
	// [ㅁㅁㅁㅁ]
	// [ㅁㅁㅁㅁ]

	// 2중 for
	// 2차원 배열의 길이
	//			2차원 배열 사이즈 / 2차원 배열 원소 하나의 사이즈(1차원 배열의 사이즈)
	int ySize= sizeof(myArray) / sizeof(myArray[0]);

	// 1차원 배열의 길이
	// 1차원 배열 사이즈 / 1차원 배열 원소 하나의 사이즈
	int xSize = sizeof(myArray[0]) / sizeof(myArray[0][0]);

	printf("2차원 배열 길이 : %d \n", ySize);
	printf("1차원 배열 길이 : %d \n", xSize);

	// 1씩 증가하며, 배열의 원소에 할당시킬 값을 갖는 변수
	int count = 1;

	// 2차원 배열의 원소를 순회할 for문
	for (int i = 0; i < ySize; ++i)
	{
		// 1차원 배열의 원소를 순회할 for문
		for (int j = 0; j < xSize; ++j)
		{
			myArray[i][j] = count++;
		}
	}

	// 2차원 배열의 원소를 순회할 for문
	for (int i = 0; i < ySize; ++i)
	{
		// 1차원 배열의 원소를 순회할 for문
		for (int j = 0; j < xSize; ++j)
		{
			printf("(myArray[%d][%d] = %d) ", i, j, myArray[i][j]);
		}
		printf("\n");
	}
}