#include <stdio.h>

// ���̰� 30�� int�� �迭�� ������ ��
// �� ���ҿ� 31���� 60������ ���� �Է��� ��, ���

void main()
{
	int myArray[30];

	int length = sizeof(myArray) / sizeof(myArray[0]);

	for (int i = 0; i < length; ++i)
	{
		myArray[i] = 31 + i;
		printf("myArray[%d] = %d \n", i, myArray[i]);
	}
	
	/*int myArray[30];

	for (int i = 30; i < 61; ++i)
	{
		printf("myArray[%d]�� %d \n", i, myArray[i]);
	}*/
}