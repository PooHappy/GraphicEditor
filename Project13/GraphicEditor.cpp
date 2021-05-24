#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Line.h"
#include "Rect.h"
#include "GraphicEditor.h"
#include "UI.h"
using namespace std;

bool GraphicEditor::Get_E() { 
	return E;
}	//E값 반환하여 종료판단
void GraphicEditor::Shape_Insert(UI &u) {	//모양 삽입
		count += 1;	//총 갯수 추가
		if (u.pick == 1) {	//선 선택시
			Shape* s = new Line();	//업캐스팅
			if (pStart == NULL) {	//처음 추가시
				pStart = s;
				pLast = s;
			}				
			else {			//처음 추가가 아니면(이미 pStart가 있으면)
				pLast = pLast->add(s);
			}				
			UI::L++;		//Line갯수 추가
		}
		else if (u.pick == 2) {	//원 선택시
			Shape* s = new Circle();	//업캐스팅
			if (pStart == NULL) {	//처음 추가시
				pStart = s;
				pLast = s;
			}
			else {			//처음 추가가 아니면(이미 pStart가 있으면)
				pLast = pLast->add(s);
			}
			UI::C++;			//Circle갯수 추가
		}
		else {				//사각형 선택시
			Shape* s = new Rect();	//업캐스팅
			if (pStart == NULL) {	//처음 추가시
				pStart = s;
				pLast = s;
			}				//처음 추가가 아니면(이미 pStart가 있으면)
			else {
				pLast = pLast->add(s);
			}
			UI::R++;		//Rect갯수 추가
		}
	}
void GraphicEditor::All_show()const {	//전체 출력
		Shape* z = pStart;	//z를 pStart점 선언
		int i = 0;
		while (i != count) {		
			if (z == NULL) {//비어있을시
				break;
			}
			else {
				cout << i << ": ";
				z->paint();	//z순서대로 무슨 도형인지 출력 & 동적바인딩
				i++;
				z = z->getNext();	//z 다음으로 이동
			}
		}
	}
void GraphicEditor::Shape_Delete() {
	bool pandan = true;	//비어있는지 판단하는 boolean 변수
	if (count == 0) {
		cout << "삭제할 도형이 없습니다" << endl;
		pandan = false;
	}
	else {
		cout << "삭제하고자 하는 도형의 인덱스 >> ";
		cout << endl;
	}
	Shape* pS = pStart;	//삭제하고자하는 인덱스 이전
	Shape* pE = pStart;	//삭제하고자하는 인덱스 다음
	for (int i = 0; i < count; i++) {
		cout << i << ": ";
		if (pS != NULL) {	//전체출력
			pS -> paint();
			pS = pS->getNext();
		}
	}
	pS = pStart;	//pStart로 pS초기화
	int i;
	while (pandan) {	//무한루프
		cin >> i;	
		if (i > count - 1) {	//입력값이 총 갯수보다 크면
			cout << count << "보다 작은 숫자를 입력하세요 >>";
		}
		else if (i < 0) {		//입력값이 0미만이면
			cout << "0보다 큰 수를 입력하세요 >>";
		}
		else {
			if (i == 0) {		//입력값이 0이면
				pStart = pStart->getNext();	//pStart를 next값으로 설정
				delete pS;		//pS(pStart)를 삭제한다
			}
			else if (count - 1 == i) {	//마지막 인덱스이면
				for (int z = 0; z < i - 1; z++) {
					pE = pE->getNext();	//마지막 2개 이전으로 설정
					pS = pS->getNext(); //마지막 2개 이전으로 설정
				}
				pE = pE->getNext();		//pE는 pE의 next값 설정
				pS->setNext(pE);		//pS의 next는 pE로 설정
				pLast = pS;				//pLast에 pS설정
				delete pE;				//pE 삭제
			}
			else {						//중간값이면
				for (int z = 0; z < i - 1; z++) {
					pS = pS->getNext();	//삭제하려는 인덱스 이전으로 설정
					pE = pE->getNext(); //삭제하려는 인덱스 이전으로 설정
				}
				pS = pS->getNext();		//pS를 다음값으로 설정
				pS = pS->getNext();		//pS를 다음값으로 설정
				delete pE->getNext();	//pE의 다음값 삭제
				pE = pE->add(pS);		//pE뒤에 pS설정
			}
			count--;		//전체 갯수 감소
			break;
		}
	}
}
void GraphicEditor::Inf_show()const {
	int i = 0;
	cout << i << " : Line " << UI::L << endl;	//Line총 갯수 출력
	i++;
	cout << i << " : Circle " << UI::C << endl;	//Circle 총 갯수 출력
	i++;
	cout << i << " : Rectangle " << UI::R << endl;	//Rect 총 갯수 출력
}
void GraphicEditor::exit() {	//종료함수
	E = true;
}
void GraphicEditor::EXE() {
	UI u;	//UI 호출
	u.Run();//Run함수 실행
	if (UI::NA == 1) {	//삽입 선택시
		Shape_Insert(u);
	}
	else if (UI::NA == 2) {	//삭제 선택시
		Shape_Delete();
	}
	else if (UI::NA == 3) {	//전체출력 선택시
		All_show();
	}
	else if (UI::NA == 4) {	//정보출력 선택시
		Inf_show();
	}
	else if (UI::NA == 5) {	//종료 선택시
		exit();
	}
}