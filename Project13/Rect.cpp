#include <iostream>
#include "Shape.h"
#include "Rect.h"
#include "UI.h"
using namespace std;
void Rect::draw() {		//RectÃâ·Â
	cout << "--Rect--" << endl;
}
Rect::~Rect() {			//¼Ò¸êÀÚ
	UI::R--;
}						//¼Ò¸êÇÏ¸é¼­ R°ª »«´Ù