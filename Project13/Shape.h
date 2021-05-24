#pragma
#include <iostream>
using namespace std;
#ifndef SHAPE_H
#define SHAPE_H
class Shape {
	Shape* next;		//다음 Shape가르킴
protected:
	virtual void draw() = 0;	//순수가상함수
public:
	Shape();			//기본생성자
	virtual ~Shape();	//가상소멸자
	void paint();		//draw()실행함수
	Shape* add(Shape* p);//추가
	Shape* getNext();	//다음 Shape 반환
	void setNext(Shape* p);	//다음 Shape 설정
};

#endif SHAPE_H