#include <iostream>
#include "Shape.h"
#include "Line.h"
#include "UI.h"
using namespace std;
void Line::draw() {	//LineÃâ·Â
	cout << "--Line--" << endl;
}	
Line::~Line() {		//¼Ò¸êÀÚ
	UI::L--;
}					//¼Ò¸êÇÏ¸é¼­ L°ª »«´Ù