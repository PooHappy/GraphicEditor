#include <iostream>
#include "Shape.h"
#include "Rect.h"
#include "UI.h"
using namespace std;
void Rect::draw() {		//Rect���
	cout << "--Rect--" << endl;
}
Rect::~Rect() {			//�Ҹ���
	UI::R--;
}						//�Ҹ��ϸ鼭 R�� ����