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
}	//E�� ��ȯ�Ͽ� �����Ǵ�
void GraphicEditor::Shape_Insert(UI &u) {	//��� ����
		count += 1;	//�� ���� �߰�
		if (u.pick == 1) {	//�� ���ý�
			Shape* s = new Line();	//��ĳ����
			if (pStart == NULL) {	//ó�� �߰���
				pStart = s;
				pLast = s;
			}				
			else {			//ó�� �߰��� �ƴϸ�(�̹� pStart�� ������)
				pLast = pLast->add(s);
			}				
			UI::L++;		//Line���� �߰�
		}
		else if (u.pick == 2) {	//�� ���ý�
			Shape* s = new Circle();	//��ĳ����
			if (pStart == NULL) {	//ó�� �߰���
				pStart = s;
				pLast = s;
			}
			else {			//ó�� �߰��� �ƴϸ�(�̹� pStart�� ������)
				pLast = pLast->add(s);
			}
			UI::C++;			//Circle���� �߰�
		}
		else {				//�簢�� ���ý�
			Shape* s = new Rect();	//��ĳ����
			if (pStart == NULL) {	//ó�� �߰���
				pStart = s;
				pLast = s;
			}				//ó�� �߰��� �ƴϸ�(�̹� pStart�� ������)
			else {
				pLast = pLast->add(s);
			}
			UI::R++;		//Rect���� �߰�
		}
	}
void GraphicEditor::All_show()const {	//��ü ���
		Shape* z = pStart;	//z�� pStart�� ����
		int i = 0;
		while (i != count) {		
			if (z == NULL) {//���������
				break;
			}
			else {
				cout << i << ": ";
				z->paint();	//z������� ���� �������� ��� & �������ε�
				i++;
				z = z->getNext();	//z �������� �̵�
			}
		}
	}
void GraphicEditor::Shape_Delete() {
	bool pandan = true;	//����ִ��� �Ǵ��ϴ� boolean ����
	if (count == 0) {
		cout << "������ ������ �����ϴ�" << endl;
		pandan = false;
	}
	else {
		cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
		cout << endl;
	}
	Shape* pS = pStart;	//�����ϰ����ϴ� �ε��� ����
	Shape* pE = pStart;	//�����ϰ����ϴ� �ε��� ����
	for (int i = 0; i < count; i++) {
		cout << i << ": ";
		if (pS != NULL) {	//��ü���
			pS -> paint();
			pS = pS->getNext();
		}
	}
	pS = pStart;	//pStart�� pS�ʱ�ȭ
	int i;
	while (pandan) {	//���ѷ���
		cin >> i;	
		if (i > count - 1) {	//�Է°��� �� �������� ũ��
			cout << count << "���� ���� ���ڸ� �Է��ϼ��� >>";
		}
		else if (i < 0) {		//�Է°��� 0�̸��̸�
			cout << "0���� ū ���� �Է��ϼ��� >>";
		}
		else {
			if (i == 0) {		//�Է°��� 0�̸�
				pStart = pStart->getNext();	//pStart�� next������ ����
				delete pS;		//pS(pStart)�� �����Ѵ�
			}
			else if (count - 1 == i) {	//������ �ε����̸�
				for (int z = 0; z < i - 1; z++) {
					pE = pE->getNext();	//������ 2�� �������� ����
					pS = pS->getNext(); //������ 2�� �������� ����
				}
				pE = pE->getNext();		//pE�� pE�� next�� ����
				pS->setNext(pE);		//pS�� next�� pE�� ����
				pLast = pS;				//pLast�� pS����
				delete pE;				//pE ����
			}
			else {						//�߰����̸�
				for (int z = 0; z < i - 1; z++) {
					pS = pS->getNext();	//�����Ϸ��� �ε��� �������� ����
					pE = pE->getNext(); //�����Ϸ��� �ε��� �������� ����
				}
				pS = pS->getNext();		//pS�� ���������� ����
				pS = pS->getNext();		//pS�� ���������� ����
				delete pE->getNext();	//pE�� ������ ����
				pE = pE->add(pS);		//pE�ڿ� pS����
			}
			count--;		//��ü ���� ����
			break;
		}
	}
}
void GraphicEditor::Inf_show()const {
	int i = 0;
	cout << i << " : Line " << UI::L << endl;	//Line�� ���� ���
	i++;
	cout << i << " : Circle " << UI::C << endl;	//Circle �� ���� ���
	i++;
	cout << i << " : Rectangle " << UI::R << endl;	//Rect �� ���� ���
}
void GraphicEditor::exit() {	//�����Լ�
	E = true;
}
void GraphicEditor::EXE() {
	UI u;	//UI ȣ��
	u.Run();//Run�Լ� ����
	if (UI::NA == 1) {	//���� ���ý�
		Shape_Insert(u);
	}
	else if (UI::NA == 2) {	//���� ���ý�
		Shape_Delete();
	}
	else if (UI::NA == 3) {	//��ü��� ���ý�
		All_show();
	}
	else if (UI::NA == 4) {	//������� ���ý�
		Inf_show();
	}
	else if (UI::NA == 5) {	//���� ���ý�
		exit();
	}
}