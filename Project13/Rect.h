#pragma
#include <iostream>
#include "Shape.h"
using namespace std;
#ifndef RECT_H
#define RECT_H
class Rect : public Shape {	//Shape�� ��ӹ޾�
	void draw();			//virtual�Լ� draw()�� ���
	~Rect();				//�Ҹ��� ����
};
#endif RECT_H
