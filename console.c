#include "console.h"

//Hello World
//int main()
//{
//	SetConsoleTitle(L"Hello World");
//	StrPrint("Hello World!\n", 10, 2, 5);
//
//	system("pause");
//	return 0;
//}

//������֮��
//int main()
//{
//	SetConsoleTitle(L"������֮��");
//	int i, j, k;
//	StrPrint("Please input two integers:",1, 1, 5);
//	scanf_s("%d%d", &i, &j);
//	k = i * j;
//	printf("%d * %d = %d\n", i, j, k);
//
//	system("pause");
//	return 0;
//}

//�Ƚ�ʵ����С
//int main()
//{
//	SetConsoleTitle(L"�Ƚ�ʵ����С");
//	float i, j;
//	StrPrint("Please input two numbers:", 1, 1, 5);
//	scanf_s("%f%f", &i, &j);
//	printf("%5.2f > %5.2f\n", i > j ? i : j, i < j ? i : j);
//
//	system("pause");
//	return 0;
//}

//�ַ��������
//int main()
//{
//	SetConsoleTitle(L"�ַ��������");
//	char str1[10], str2[10];
//	StrPrint("please input a string:", 1, 1, 5);
//	gets(str1);
//	printf("Your input string is:%s\n", str1);
//
//	system("pause");
//	return 0;
//}

//��ʾ������ռ�ֽ���
//int main()
//{
//	SetConsoleTitle(L"��ʾ������ռ�ֽ���");
//	StrPrint("��ʾ������ռ�ֽ���\n", 1, 1, 5);
//	printf("  short  ��ռ %d ���ֽ�\n", sizeof(short));
//	printf("  int    ��ռ %d ���ֽ�\n", sizeof(int));
//	printf("  long   ��ռ %d ���ֽ�\n", sizeof(long));
//	printf("  float  ��ռ %d ���ֽ�\n", sizeof(float));
//	printf("  double ��ռ %d ���ֽ�\n", sizeof(double));
//	printf("  char   ��ռ %d ���ֽ�\n", sizeof(char));
//	printf("  WORD   ��ռ %d ���ֽ�\n", sizeof(WORD));
//	printf("  DWORD  ��ռ %d ���ֽ�\n", sizeof(DWORD));
//
//	system("pause");
//	return 0;
//}

//�����Լ�����
//int main()
//{
//	SetConsoleTitle(L"�����Լ�����");
//	StrPrint("�����Լ�����\n", 1, 1, 5);
//	int i = 5, j = 10;
//	printf("  i ����ǰΪ  %d\n", i);
//	printf("  ++i�����Ϊ %d\n", ++i); printf("\t\t�����ֵ\n");
//	printf("  i ����ǰΪ  %d\n", i);
//	printf("  i++�����Ϊ %d\n", i++); printf("\t\t�ȸ�ֵ������\n");
//	printf("  i ����ǰΪ  %d\n", i);
//	printf("  --i�����Ϊ %d\n", --i); printf("\t\t�����ֵ\n");
//	printf("  i ����ǰΪ  %d\n", i);
//	printf("  i--�����Ϊ %d\n", i--); printf("\t\t�ȸ�ֵ������\n");
//	printf("  i ��ֵΪ    %d\n", i);
//	printf("\n");
//	printf("  j ����ǰΪ  %d\n", j);
//	printf("  ++j�����Ϊ %d\n", ++j); printf("\t\t�����ֵ\n");
//	printf("  j ����ǰΪ  %d\n", j);
//	printf("  j++�����Ϊ %d\n", j++); printf("\t\t�ȸ�ֵ������\n");
//	printf("  j ����ǰΪ  %d\n", j);
//	printf("  --j�����Ϊ %d\n", --j); printf("\t\t�����ֵ\n");
//	printf("  j ����ǰΪ  %d\n", j);
//	printf("  j--�����Ϊ %d\n", j--); printf("\t\t�ȸ�ֵ������\n");
//	printf("  j ��ֵΪ    %d\n", j);
//
//	system("pause");
//	return 0;
//}

//�������
//int main()
//{
//	SetConsoleTitle(L"�������");
//	int i, j, n;
//	long sum = 0, temp = 0;
//	
//	printf("Please input a number to n:\n");
//	scanf_s("%d", &n);
//	if (n < 1)
//	{
//		printf("The n must no less than 1!\n");
//		return;
//	}
//
//	for (i = 1; i <= n; i++)
//	{
//		temp = 0;
//		for (j = 1; j <= i; j++)
//		{
//			temp += j;
//		}
//		sum += temp;
//	}
//	printf("The sum of the sequence(%d) is %d\n", n, sum);
//	
//	system("pause");
//
//	return 0;
//}

//�˷��ھ���
//int main()
//{
//	SetConsoleTitle(L"�˷��ھ���");
//	StrPrint("== �˷��ھ��� ==", 28, 1, 3);
//	printf("\n\n");
//	for (int i = 1; i < 10; i++)
//	{
//		printf("  ");
//		for (int j = i; j < 10; j++)
//		{
//			printf("%d��%d=%2d  ", i, j, i * j);
//		}
//		putchar('\n');
//	}
//
//	system("pause");
//	return 0;
//}

//��������Ϸ
//void main()
//{
//	srand((unsigned)time(NULL));
//	int Password = 0, Number = 0, price = rand() % 100, i = 0,k =0;
//	system("cls");
//	SetConsoleTitle(L"==��������Ϸ==");
//	StrPrint("===This is a Number Guess Game!===", 10, 1, 5);
//	while (Password != 1234)
//	{
//		if (i >= 3)
//			return;
//		i++;
//		StrPrint("Please input Password:", 0, 2, 3);
//		scanf_s("%d", &Password);
//	}
//
//	i = 0;
//	while (Number != price)
//	{
//		do {
//			printf("Please input a number between 1 and 100:");
//			scanf("%d", &Number);
//			printf("Your input number is %d \n", Number);
//			if (Number > price)
//			{
//				if ((Number - price) >= 50)
//				{
//					printf("Too Bigger!Press any key to try again!\n");
//					continue;
//				}
//				else if ((Number - price) >= 20 && (Number - price) < 50)
//				{
//					printf("Bigger!Press any key to try again!\n");
//					continue;
//				}
//				else if ((Number - price) < 20 && (Number - price) > 10)
//				{
//					printf("Bigger!\n");
//					continue;
//				}
//				else if ((Number - price) <= 10)
//				{
//					printf("Sorry,Only a little bigger!Press any key to try again!\n");
//					continue;
//				}
//			}
//			if(Number < price)
//			{
//				if ((price - Number) >= 50)
//				{
//					printf("Too Small!Press any key to try again!\n");
//					continue;
//				}
//				else if ((price - Number) >= 20 && (price - Number) < 50)
//				{
//					printf("Small!Press any key to try again!\n");
//					continue;
//				}
//				else if ((price - Number) < 20 && (price - Number) > 10)
//				{
//					printf("Small!\n");
//					continue;
//				}
//				else if ((price - Number) <= 10)
//				{
//					printf("Sorry,Only a little smaller!Press any key to try again!\n");
//					continue;
//				}
//				system("pause");
//			}
//			if (Number == price)
//			{
//				printf("OK!You are right!Bye Bye!\n");
//			}
//		} while (!(Number >= 1 && Number <= 100));
//	}
//
//	system("pause");
//
//	return 0;
//}