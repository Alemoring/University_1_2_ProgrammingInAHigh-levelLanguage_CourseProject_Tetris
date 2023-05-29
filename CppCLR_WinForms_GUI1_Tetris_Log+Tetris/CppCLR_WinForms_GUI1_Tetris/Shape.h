#pragma once
#include "ShapeType.h"
using namespace System;
#define size 20	//размер квадратика фигуры
ref class Shape
{
public:
	Shape()
	{
		cells = gcnew array<Boolean, 2>(4, 4);
	}
	array<Boolean, 2>^ cells; // матрица, содержащая фигуру
	ShapeType	curType; // текущий тип

	void	NewShape(ShapeType type)
	{
		ClearShape(cells);
		Int16 i;
		curType = type;

		switch (type)
		{
		case ShapeType::line:		for (i = 0; i != 4; ++i)
			cells[0, i] = true;
			break;

		case ShapeType::square:		for (i = 0; i != 2; ++i)
			for (Int16 j = 0; j != 2; ++j)
				cells[i, j] = true;
			break;

		case ShapeType::leftL:		for (i = 0; i != 3; ++i)
			cells[0, i] = true;
			cells[1, 2] = true;
			break;

		case ShapeType::rightL:		for (i = 0; i != 3; ++i)
			cells[0, i] = true;
			cells[1, 0] = true;
			break;

		case ShapeType::pyramide:	for (i = 0; i != 3; ++i)
			cells[1, i] = true;
			cells[0, 1] = true;
			break;

		case ShapeType::leftZ:		cells[0, 0] = true;
			cells[1, 0] = true;
			cells[1, 1] = true;
			cells[2, 1] = true;
			break;

		case ShapeType::rightZ:		cells[0, 1] = true;
			cells[1, 0] = true;
			cells[1, 1] = true;
			cells[2, 0] = true;
			break;
		}
	}
	void	Rotate()
	{

		switch (curType)
		{
		case ShapeType::line:
		{
			Int16 k;
			if (cells[0, 0] == true)
			{
				ClearShape(cells);
				for (k = 0; k != 4; ++k)
					cells[k, 1] = true;
			}
			else
			{
				ClearShape(cells);
				for (k = 0; k != 4; ++k)
					cells[0, k] = true;
			}
		}
		case ShapeType::square: return;
		}

		array<Boolean, 2>^ tempShape = gcnew array<Boolean, 2>(4, 4);
		ClearShape(tempShape);
		for (Int16 j = 3 - 1, c = 0; j >= 0; j--, c++)
			for (Int16 i = 0; i < 3; i++)
				tempShape[c, i] = cells[i, j];

		ClearShape(cells);

		for (Int16 f = 0; f < 3; f++)
			for (Int16 d = 0; d < 3; d++)
				cells[f, d] = tempShape[f, d];
	}
	void	ClearShape(array<Boolean, 2>^ c) // очистка фигуры
	{
		for (Int16 i = 0; i != 4; ++i)
			for (Int16 j = 0; j != 4; ++j)
				c[i, j] = false;
	}

};