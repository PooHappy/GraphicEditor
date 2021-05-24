#include <iostream>
#include "UI.h"
using namespace std;

int UI::L = 0;
int UI::C = 0;
int UI::R = 0;
int UI::pick = 0;
int UI::NA = 0;
int UI::Run() {	//메뉴 실행
	cout << "삽입 : 1, 제거 : 2, 모두보기 : 3, 정보출력 : 4, 종료 : 5 >>";
	Pick();
	if (UI::NA == 1) {	//메뉴 선택 변수에 따라 실행
		Insert();		//Insert()실행
		return 1;		//1반환
	}
	else if (NA == 2) {
		return 2;		//2반환
	}
	else if (NA == 3) {
		return 3;		//3반환
	}
	else if (NA == 4) {
		return 4;		//4반환
	}
	else {
		return 5;		//5반환
	}
};
void UI::Pick() {
	int i;
	while (true) {
		cin >> i;
		if (cin.fail()) {
			cout << "숫자만 입력하세요" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		}
		else if (i < 1 || i>6) {
			cout << "1,2,3,4,5중에 입력하세요" << endl;
		}
		else {
			UI::NA = i;	//메뉴 선택 변수 NA
			break;
		}
	}
};
void  UI::Insert() {	//삽입 선택시 출력문
	cout << "선 : 1, 원 : 2, 사각형 : 3 >> ";
	int i;
	while (true) {
		cin >> i;
		if (cin.fail()) {
			cout << "숫자만 입력하세요" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		}
		else if (i < 1 || i > 4) {
			cout << "1,2,3중에 입력하세요" << endl;
		}
		else {
			UI::pick = i;	//선택한 도형 저장변수 pick
			break;
		}
	}
};
