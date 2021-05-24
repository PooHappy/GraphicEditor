#pragma
#include <iostream>
#include "Shape.h"
#include "UI.h"
using namespace std;
#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H
class GraphicEditor {
	Shape* pStart;		//시작점
	Shape* pLast;		//끝
	int count = 0;		//count변수 선언
	bool E = false;		//종료 변수
public:
	bool Get_E();		//종료변수 반환
	void Shape_Insert(UI &u);//모양 삽입
	void All_show()const;	//전체 출력
	void Shape_Delete();//모양 삭제
	void Inf_show()const;	//정보 출력
	void exit();		//종료
	void EXE();			//실행
};
#endif GRAPHICEDITOR_H