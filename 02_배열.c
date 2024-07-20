#include <stdio.h>

void main()
{
	int myArray[] = { 1, 2, 3 };

	// 배열의 범위를 벗어나서 사용한다면?
	for (int i = 0; i < 5; ++i)
	{
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}

	// 공간을 벗어나서 데이터를 읽을 때는 단순히 잘못된 값을 읽게되서 그나마 나은 상황..
	// 잘못된 공간의 데이터를 쓰기를 하게 된다면, 
	// 해당 주소에 어떠한 데이터가 있는지 알 수 없고,
	// 프로그램이 다운되거나, 사용중인 다른 프로그램의 데이터가 변조되는 등 알 수 없는 오류가 발생할 수 있음
	// 따라서, 배열의 범위를 벗어나지 않게끔 코드를 작성하는 것이 중요
	
	// 배열의 길이를 나타내는 값을 리터럴 데이터로 직접 작성하기 보다는
	// sizeof 연산자 등을 이용해 배열의 크기를 구한 후,
	// 해당 값을 이용하는 것이 좋음
	
	int length = sizeof(myArray) / sizeof(myArray[0]);
	for (int i = 0; i < length; ++i)
	{
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}
}