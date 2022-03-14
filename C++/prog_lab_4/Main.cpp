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
	point* ptmas1 = new point[a];//инициализация одномерного массива размерностью a = 4
	printf("Вывод одномерного массива: \n");
	for  (i = 0; i  < a; i ++)//вывод одномерного массива
	{
		ptmas1[i].vivod();
		printf("\t");
	}
	point** ptmas2 = new point*[b];//инициализация двумерного массива размерностью b = 3 на c =2
	for (i = 0; i < b; i++)
	{
		ptmas2[i] = new point[c];
	}
	printf("\nВывод двумерного массива: \n");
	for (i = 0; i < b; i++) {//вывод двумерного массива
		for (j = 0; j < c; j++) {
			ptmas2[i][j].vivod();
			printf("\t");
		}
		printf("\n");
	}
	return 0;
}