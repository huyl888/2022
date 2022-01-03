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

//求整数之积
//int main()
//{
//	SetConsoleTitle(L"求整数之积");
//	int i, j, k;
//	StrPrint("Please input two integers:",1, 1, 5);
//	scanf_s("%d%d", &i, &j);
//	k = i * j;
//	printf("%d * %d = %d\n", i, j, k);
//
//	system("pause");
//	return 0;
//}

//比较实数大小
//int main()
//{
//	SetConsoleTitle(L"比较实数大小");
//	float i, j;
//	StrPrint("Please input two numbers:", 1, 1, 5);
//	scanf_s("%f%f", &i, &j);
//	printf("%5.2f > %5.2f\n", i > j ? i : j, i < j ? i : j);
//
//	system("pause");
//	return 0;
//}

//字符输入输出
//int main()
//{
//	SetConsoleTitle(L"字符输入输出");
//	char str1[10], str2[10];
//	StrPrint("please input a string:", 1, 1, 5);
//	gets(str1);
//	printf("Your input string is:%s\n", str1);
//
//	system("pause");
//	return 0;
//}

//显示变量所占字节数
//int main()
//{
//	SetConsoleTitle(L"显示变量所占字节数");
//	StrPrint("显示变量所占字节数\n", 1, 1, 5);
//	printf("  short  型占 %d 个字节\n", sizeof(short));
//	printf("  int    型占 %d 个字节\n", sizeof(int));
//	printf("  long   型占 %d 个字节\n", sizeof(long));
//	printf("  float  型占 %d 个字节\n", sizeof(float));
//	printf("  double 型占 %d 个字节\n", sizeof(double));
//	printf("  char   型占 %d 个字节\n", sizeof(char));
//	printf("  WORD   型占 %d 个字节\n", sizeof(WORD));
//	printf("  DWORD  型占 %d 个字节\n", sizeof(DWORD));
//
//	system("pause");
//	return 0;
//}

//自增自减运算
//int main()
//{
//	SetConsoleTitle(L"自增自减运算");
//	StrPrint("自增自减运算\n", 1, 1, 5);
//	int i = 5, j = 10;
//	printf("  i 运算前为  %d\n", i);
//	printf("  ++i运算后为 %d\n", ++i); printf("\t\t运算后赋值\n");
//	printf("  i 运算前为  %d\n", i);
//	printf("  i++运算后为 %d\n", i++); printf("\t\t先赋值再运算\n");
//	printf("  i 运算前为  %d\n", i);
//	printf("  --i运算后为 %d\n", --i); printf("\t\t运算后赋值\n");
//	printf("  i 运算前为  %d\n", i);
//	printf("  i--运算后为 %d\n", i--); printf("\t\t先赋值再运算\n");
//	printf("  i 的值为    %d\n", i);
//	printf("\n");
//	printf("  j 运算前为  %d\n", j);
//	printf("  ++j运算后为 %d\n", ++j); printf("\t\t运算后赋值\n");
//	printf("  j 运算前为  %d\n", j);
//	printf("  j++运算后为 %d\n", j++); printf("\t\t先赋值再运算\n");
//	printf("  j 运算前为  %d\n", j);
//	printf("  --j运算后为 %d\n", --j); printf("\t\t运算后赋值\n");
//	printf("  j 运算前为  %d\n", j);
//	printf("  j--运算后为 %d\n", j--); printf("\t\t先赋值再运算\n");
//	printf("  j 的值为    %d\n", j);
//
//	system("pause");
//	return 0;
//}

//数列求和
//int main()
//{
//	SetConsoleTitle(L"数列求和");
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

//乘法口诀表
//int main()
//{
//	SetConsoleTitle(L"乘法口诀表");
//	StrPrint("== 乘法口诀表 ==", 28, 1, 3);
//	printf("\n\n");
//	for (int i = 1; i < 10; i++)
//	{
//		printf("  ");
//		for (int j = i; j < 10; j++)
//		{
//			printf("%d×%d=%2d  ", i, j, i * j);
//		}
//		putchar('\n');
//	}
//
//	system("pause");
//	return 0;
//}

//猜数字游戏
//void main()
//{
//	srand((unsigned)time(NULL));
//	int Password = 0, Number = 0, price = rand() % 100, i = 0,k =0;
//	system("cls");
//	SetConsoleTitle(L"==猜数字游戏==");
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