#pragma
#include <iostream>
using namespace std;
#ifndef SHAPE_H
#define SHAPE_H
class Shape {
	Shape* next;		//���� Shape����Ŵ
protected:
	virtual void draw() = 0;	//���������Լ�
public:
	Shape();			//�⺻������
	virtual ~Shape();	//����Ҹ���
	void paint();		//draw()�����Լ�
	Shape* add(Shape* p);//�߰�
	Shape* getNext();	//���� Shape ��ȯ
	void setNext(Shape* p);	//���� Shape ����
};

#endif SHAPE_H