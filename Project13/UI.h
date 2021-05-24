#pragma
using namespace std;
#ifndef UI_H
#define UI_H
class UI {
public:
	static int pick;	//선택한 도형 저장변수 pick
	static int NA;		//메뉴 선택 변수 NA
	static int L;		//Line갯수
	static int C;		//Circle갯수
	static int R;		//Rect갯수
	static int Run();	//실행
	static void Pick();	//메뉴선택
	static void Insert();	//삽입
};
#endif UI_H