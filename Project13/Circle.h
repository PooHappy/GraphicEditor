#pragma once
#include <iostream>
#include "Shape.h"
#include "UI.h"
using namespace std;
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public Shape {	//Shape�� ��ӹ޾�
	void draw();				//virtual�Լ� draw()�� ���
	~Circle();					//�Ҹ��� ����
};
#endif
