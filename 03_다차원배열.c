#include <stdio.h>

void main()
{
	// 2���� �迭�� �̿��ؼ�
	// �迭�� �Ʒ��� ������ ä�� ��, ���
	
	// ���� 1
	// 1 2 3 4 5
	// 6 7 8 9 10
	// 11 12 13 14 15
	// 16 17 18 19 20

	int myArray[4][5];
	int ySize = sizeof(myArray) / sizeof(myArray[0]);
	int xSize = sizeof(myArray[0]) / sizeof(myArray[0][0]);

	int count = 1;

	for (int i = 0; i < ySize; ++i)
	{
		for (int j = 0; j < xSize; ++j)
		{
			myArray[i][j] = count++;
			printf("%2d ", myArray[i][j]);
		}
		printf("\n");
	}

	// �������� �Է°� ����� �и��ϸ�,
	// ���� �ذ��� �� ����������.
	
	// ���� 2
	// 20 19 18 17 16
	// 15 14 13 12 11
	// 10 9 8 7 6
	// 5 4 3 2 1

	count = 1;
	for (int i = ySize - 1; i > -1; --i)
	{
		for (int j = xSize - 1; j > -1; --j)
		{
			myArray[i][j] = count++;
		}
	}

	for (int i = 0; i < ySize; ++i)
	{
		for (int j = 0; j < xSize; ++j)
		{
			printf("%2d ", myArray[i][j]);
		}
		printf("\n");
	}

	// ���� 3
	// 16 17 18 19 29
	// 11 12 13 14 15
	// 6 7 8 9 10
	// 1 2 3 4 5

	count = 1;

	for (int i = ySize - 1; i > -1; --i)
	{
		for (int j = 0; j < xSize; ++j)
		{
			myArray[i][j] = count++;
		}
	}

	for (int i = 0; i < ySize; ++i)
	{
		for (int j = 0; j < xSize; ++j)
		{
			printf("%2d ", myArray[i][j]);
		}
		printf("\n");
	}
}