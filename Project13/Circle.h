#pragma once
#include <iostream>
#include "Shape.h"
#include "UI.h"
using namespace std;
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle : public Shape {	//Shape를 상속받아
	void draw();				//virtual함수 draw()를 사용
	~Circle();					//소멸자 선언
};
#endif
