#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape() { next = NULL; }	//�⺻������ ������ NULL����
Shape::~Shape() {}	//�Ҹ���
void Shape::paint() { draw(); }	//draw()���� �Լ� paint()
Shape* Shape::add(Shape* p) { this->next = p; return p; }	//���� �߰� �Լ�
Shape* Shape::getNext() { return next; }	//���� ���� ��ȯ �Լ�
void Shape::setNext(Shape* p) { this->next = p->next; } //��带 �����Ҷ� ��� -> ���� ��带 ������ ��� ������ ���� ����