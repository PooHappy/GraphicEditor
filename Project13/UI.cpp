#include <iostream>
#include "UI.h"
using namespace std;

int UI::L = 0;
int UI::C = 0;
int UI::R = 0;
int UI::pick = 0;
int UI::NA = 0;
int UI::Run() {	//�޴� ����
	cout << "���� : 1, ���� : 2, ��κ��� : 3, ������� : 4, ���� : 5 >>";
	Pick();
	if (UI::NA == 1) {	//�޴� ���� ������ ���� ����
		Insert();		//Insert()����
		return 1;		//1��ȯ
	}
	else if (NA == 2) {
		return 2;		//2��ȯ
	}
	else if (NA == 3) {
		return 3;		//3��ȯ
	}
	else if (NA == 4) {
		return 4;		//4��ȯ
	}
	else {
		return 5;		//5��ȯ
	}
};
void UI::Pick() {
	int i;
	while (true) {
		cin >> i;
		if (cin.fail()) {
			cout << "���ڸ� �Է��ϼ���" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		}
		else if (i < 1 || i>6) {
			cout << "1,2,3,4,5�߿� �Է��ϼ���" << endl;
		}
		else {
			UI::NA = i;	//�޴� ���� ���� NA
			break;
		}
	}
};
void  UI::Insert() {	//���� ���ý� ��¹�
	cout << "�� : 1, �� : 2, �簢�� : 3 >> ";
	int i;
	while (true) {
		cin >> i;
		if (cin.fail()) {
			cout << "���ڸ� �Է��ϼ���" << endl;
			cin.clear();
			cin.ignore(256,'\n');
		}
		else if (i < 1 || i > 4) {
			cout << "1,2,3�߿� �Է��ϼ���" << endl;
		}
		else {
			UI::pick = i;	//������ ���� ���庯�� pick
			break;
		}
	}
};
