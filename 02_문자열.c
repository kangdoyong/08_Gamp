#include <stdio.h>
#include <string.h>

void main()
{
	// ���ڿ��� ���̸� ���� ��, strlen()�� ���
	char myString[] = "HelloWorld!";

	// NULL ���ڸ� ������ ���ڿ��� ���̸� ��ȯ
	printf("myString ���̴� %d \n", strlen(myString));
	// NULL ���ڸ� ������ ���̸� ��ȯ
	printf("myString ���̴� %d \n", sizeof(myString));

	
	// ���� �ٸ� ���ڿ��� ���� ���� ��, strcat()�� ���
	// strcat(string1, string2) : string1 + string2
	// string1�� �������� ����� ���Ƿ�,
	// string1�� string1 + string2�� ������ �� �մ� ũ�⿩�� ��

	char myString2[256] = "�ȳ�";
	
	strcat(myString2, myString);
	printf("myString2�� %s \n", myString2);

	// ���� �ٸ� ���ڿ��� ���� ��, strcmp()
	char myString3[] = "�ȳ��ϼ���?";

	// ���ڿ��� ���� ���ٸ�, 0�� ��ȯ
	printf("myString3 == myString2 = %d \n", strcmp(myString3, myString2));
	printf("%d \n", strcmp(myString3, "�ȳ��ϼ���?"));
}