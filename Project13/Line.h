#pragma
#include <iostream>
#include "Shape.h"
using namespace std;
#ifndef LINE_H
#define LINE_H
class Line : public Shape {//Shape를 상속받아
	void draw();			//virtual함수 draw()를 사용
	~Line();				//소멸자 선언
};

#endif LINE_H
