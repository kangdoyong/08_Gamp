#include <stdio.h>

// 陥託据 壕伸戚空?
// 壕伸聖 据社稽 握澗 壕伸聖 税耕
// 1託据 壕伸聖 据社稽 握澗 壕伸聖 2託据 壕伸
// 2託据 壕伸聖 据社稽 握澗 壕伸聖 3託据 壕伸

void main()
{
	// 2託据 壕伸
	// 唖唖税 据社亜 1託据 壕伸聖 馬蟹梢 握柔艦陥.
	// 痕呪縦紺切 [2託据 掩戚][1託据 掩戚
	// 
	// 掩戚亜 4昔 壕伸聖 据社稽 3鯵 握澗 2託据 壕伸聖 識情
	int myArray[3][4];
	// [けけけけ]
	// [けけけけ]
	// [けけけけ]

	// 2掻 for
	// 2託据 壕伸税 掩戚
	//			2託据 壕伸 紫戚綜 / 2託据 壕伸 据社 馬蟹税 紫戚綜(1託据 壕伸税 紫戚綜)
	int ySize= sizeof(myArray) / sizeof(myArray[0]);

	// 1託据 壕伸税 掩戚
	// 1託据 壕伸 紫戚綜 / 1託据 壕伸 据社 馬蟹税 紫戚綜
	int xSize = sizeof(myArray[0]) / sizeof(myArray[0][0]);

	printf("2託据 壕伸 掩戚 : %d \n", ySize);
	printf("1託据 壕伸 掩戚 : %d \n", xSize);

	// 1梢 装亜馬悟, 壕伸税 据社拭 拝雁獣迭 葵聖 握澗 痕呪
	int count = 1;

	// 2託据 壕伸税 据社研 授噺拝 for庚
	for (int i = 0; i < ySize; ++i)
	{
		// 1託据 壕伸税 据社研 授噺拝 for庚
		for (int j = 0; j < xSize; ++j)
		{
			myArray[i][j] = count++;
		}
	}

	// 2託据 壕伸税 据社研 授噺拝 for庚
	for (int i = 0; i < ySize; ++i)
	{
		// 1託据 壕伸税 据社研 授噺拝 for庚
		for (int j = 0; j < xSize; ++j)
		{
			printf("(myArray[%d][%d] = %d) ", i, j, myArray[i][j]);
		}
		printf("\n");
	}
}