#include <iostream>
#include "GraphicEditor.h"
using namespace std;
int main()
{
	cout << "그래픽 에디터 입니다" << endl;
	GraphicEditor g;	//GraphicEditor g 선언
	while (g.Get_E() == false) {	//5번 입력하기 전까지 
		g.EXE();					//실행
	}
}