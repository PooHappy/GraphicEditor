#pragma
#include <iostream>
#include "Shape.h"
#include "UI.h"
using namespace std;
#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H
class GraphicEditor {
	Shape* pStart;		//������
	Shape* pLast;		//��
	int count = 0;		//count���� ����
	bool E = false;		//���� ����
public:
	bool Get_E();		//���ắ�� ��ȯ
	void Shape_Insert(UI &u);//��� ����
	void All_show()const;	//��ü ���
	void Shape_Delete();//��� ����
	void Inf_show()const;	//���� ���
	void exit();		//����
	void EXE();			//����
};
#endif GRAPHICEDITOR_H