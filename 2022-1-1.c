#include "2022-1-1.h"

//设置窗口函数
bool SetWindowSize(wchar_t* pTitle, int nWidh, int nHigh)
{
	SetConsoleTitle(pTitle);
	HANDLE hWindow = GetStdHandle(STD_OUTPUT_HANDLE);
	SMALL_RECT sr = { 0 };
	sr.Bottom = nHigh;
	sr.Right = nWidh;
	SetConsoleWindowInfo(hWindow, true, &sr);
	COORD cd = { nWidh + 1,nHigh + 1 };
	SetConsoleScreenBufferSize(hWindow, cd);

	return 0;
}

bool InitMap(int(*p)[40])
{
	for (size_t i = 0; i < 40; i++)
	{
		for (size_t j = 0; j < 40; j++)
			if (i == 0 || j == 0 || i == 39 || j == 39)
			{
				p[i][j] = 1;
			}
	}
	for (size_t i = 0; i < 40; i++)
	{
		for (size_t j = 0; j < 40; j++)
			if (p[i][j])
			{
				WriteChar("■", j, i, 8);
			}
	}
	return true;
}

void GetZkMap()
{
	for (int i = 40; i < 50; i++)
	{
		WriteChar("■", i, 0, 8);
	}
	for (int i = 40; i < 50; i++)
	{
		WriteChar("■", i, 39, 8);
	}
	for (int i = 0; i < 40; i++)
	{
		WriteChar("■", 49, i, 8);
	}
	for (int i = 0; i < 40; i++)
	{
		WriteChar("■", 40, i, 8);
	}
}

void GetMap(int * pMap[40][40])
{
	for (int i = 0; i < 40; i++)
	{
		for (int j = 0; j < 40; j++)
		{
			if (pMap[i][j] == 1)
			{
				WriteChar("▓", j, i, 9);
			}
			if (pMap[i][j] == 2)
			{
				WriteChar("※", j, i, 2);
			}
			if (pMap[i][j] == 3)
			{
				WriteChar("∷", j, i, 15);
			}
			if (pMap[i][j] == 4)
			{
				WriteChar("◎", j, i, 6);
			}
			if (pMap[i][j] == 5)
			{
				WriteChar("〓", j, i, 7);
			}
			if (pMap[i][j] == 6)
			{
				WriteChar("■", j, i, 3);
			}
			if (pMap[i][j] == 7)	//AI老巢
			{
				WriteChar("★", j, i, 5);
			}
			if (pMap[i][j] == 8)	//player老巢
			{
				WriteChar("★", j, i, 4);
			}
			if (pMap[i][j] == 9)
			{
				WriteChar("■", j, i, 15);
			}
		}
	}
}

//战况
void ShowZk()
{
	PosPrint("战况显示", 84, 4,12);
	PosPrint("战斗中...", 84, 8, 12);
	PosPrint("剩余敌军:", 84, 12, 12);
	PosPrint("第 X 关", 84, 16, 12);
}

int main()
{
	SetWindowSize(L"坦克大战", 105, 40);
	InitMap(TempMap0);
	TpMap = TempMap2;
	GetMap(TpMap);
	GetZkMap();
	ShowZk();
	DrawTank(PlTank);
	DrawTank(AiTank);

	while (true)
	{
		char ch = getch();

		if (_kbhit)
		{
			ClearTank(PlTank);
			if (ch >= '1' && ch <= '9')
			{

			}
			else
			{
				TankMove(ch);
			}
			DrawTank(PlTank);
		}
		DrawTank(PlTank);
	}

	getchar();
}