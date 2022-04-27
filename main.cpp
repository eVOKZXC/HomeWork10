#include "Header.h"

int main() {
	setlocale(LC_ALL, "rus");
	Student student("Панферов", "Кирилл", "Александрович", 19, 0);
	Boss boss("Рогозин", "Реальный", "Пуджжж", 228, 1337);
	student.print();
	cout << endl;
	boss.print();
}