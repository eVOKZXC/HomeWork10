#include "Header.h"

int main() {
	setlocale(LC_ALL, "rus");
	Student student("��������", "������", "�������������", 19, 0);
	Boss boss("�������", "��������", "������", 228, 1337);
	student.print();
	cout << endl;
	boss.print();
}