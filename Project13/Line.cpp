#include <iostream>
#include "Shape.h"
#include "Line.h"
#include "UI.h"
using namespace std;
void Line::draw() {	//Line���
	cout << "--Line--" << endl;
}	
Line::~Line() {		//�Ҹ���
	UI::L--;
}					//�Ҹ��ϸ鼭 L�� ����