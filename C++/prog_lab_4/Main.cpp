#include <Windows.h>
#include <iostream>
#include "line.h"
#include "angle.h"
#include "triangle.h"
#include "circle.h"
#include "segments.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	const int a = 4, b = 2, c = 3;
	int i, j;
	point* ptmas1 = new point[a];//������������� ����������� ������� ������������ a = 4
	printf("����� ����������� �������: \n");
	for  (i = 0; i  < a; i ++)//����� ����������� �������
	{
		ptmas1[i].vivod();
		printf("\t");
	}
	point** ptmas2 = new point*[b];//������������� ���������� ������� ������������ b = 3 �� c =2
	for (i = 0; i < b; i++)
	{
		ptmas2[i] = new point[c];
	}
	printf("\n����� ���������� �������: \n");
	for (i = 0; i < b; i++) {//����� ���������� �������
		for (j = 0; j < c; j++) {
			ptmas2[i][j].vivod();
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}