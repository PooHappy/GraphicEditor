#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "UI.h"
using namespace std;
void Circle::draw() {	//Circle ���
	cout << "--Circle--" << endl;
}	
Circle::~Circle() {	//Circle ����
	UI::C--;
}	//�Ҹ��� �����ϸ鼭 C���� �ϳ� ����