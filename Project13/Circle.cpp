#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "UI.h"
using namespace std;
void Circle::draw() {	//Circle 출력
	cout << "--Circle--" << endl;
}	
Circle::~Circle() {	//Circle 삭제
	UI::C--;
}	//소멸자 실행하면서 C값도 하나 뺀다