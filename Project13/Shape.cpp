#include <iostream>
#include "Shape.h"
using namespace std;

Shape::Shape() { next = NULL; }	//기본생성자 다음값 NULL설정
Shape::~Shape() {}	//소멸자
void Shape::paint() { draw(); }	//draw()실행 함수 paint()
Shape* Shape::add(Shape* p) { this->next = p; return p; }	//도형 추가 함수
Shape* Shape::getNext() { return next; }	//다음 도형 반환 함수
void Shape::setNext(Shape* p) { this->next = p->next; } //노드를 삭제할때 사용 -> 다음 노드를 삭제할 노드 다음의 노드로 설정