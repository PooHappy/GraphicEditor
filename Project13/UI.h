#pragma
using namespace std;
#ifndef UI_H
#define UI_H
class UI {
public:
	static int pick;	//������ ���� ���庯�� pick
	static int NA;		//�޴� ���� ���� NA
	static int L;		//Line����
	static int C;		//Circle����
	static int R;		//Rect����
	static int Run();	//����
	static void Pick();	//�޴�����
	static void Insert();	//����
};
#endif UI_H