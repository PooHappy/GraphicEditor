#pragma
#include <iostream>
#include "Shape.h"
using namespace std;
#ifndef LINE_H
#define LINE_H
class Line : public Shape {//Shape�� ��ӹ޾�
	void draw();			//virtual�Լ� draw()�� ���
	~Line();				//�Ҹ��� ����
};

#endif LINE_H
