// Gocool.cpp : ���� DLL Ӧ�ó���ĵ���������
//

#include "stdafx.h"
#include "head.h"

void __stdcall test01(int** arr, int row, int column)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < column; ++j)
		{
			arr[i][j] = i + j;
		}
	}
}

