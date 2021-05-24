#pragma
#include <iostream>
#include "Shape.h"
using namespace std;
#ifndef RECT_H
#define RECT_H
class Rect : public Shape {	//Shape를 상속받아
	void draw();			//virtual함수 draw()를 사용
	~Rect();				//소멸자 선언
};
#endif RECT_H
