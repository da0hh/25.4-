#include "physic.h"
#include <string>
#include <iostream>
#include <vector>

using namespace std;

struct Сoordinates {
	double x;
	double y;
};


int main(){
	setlocale(LC_ALL, "RU");
	Сoordinates cors;
	string name;
	double dot;
	vector<Сoordinates> suturesData;
	vector<Сoordinates> scalpelsData;

	std::cout << "Чтобы начать операцию\n";

	while (true) {
		cout << "Введите инструмент: "; cin >> name;
		if (name == "scalpel") {
			cout << "Введите две координаты(X Y): "; cin >> cors.x >> cors.y;
			scalpel(cors.x, cors.y);

			scalpelsData.push_back({ cors.x, cors.y });
		}

		else if (name == "hemostat") {
			cout << "Введите одну точку где требуется сделать зажим: "; cin >> dot;
			hemostat(dot);
		}
		else if (name == "tweezers") {
			cout << "Введите одну точку где требуется применить пинцет: "; cin >> dot;
			tweezers(dot);
		}
		else if (name == "suture") {
			cout << "Введите две координаты между которыми требуется сделать шов(X Y): "; cin >> cors.x >> cors.y;

			suturesData.push_back({ cors.x, cors.y });
				
			for (int i = 0; i < suturesData.size(); i++) {
				if (i < scalpelsData.size() && 
					scalpelsData[i].x == suturesData[i].x && 
					scalpelsData[i].y == suturesData[i].y) {
					cout << "Операция завершена.\n";
					return 0;
				}
				else {
					cout << "Операция не завершена\n";
					return 1;
				}
			}
		}
		else {
			cout << "Ошибка\n";
			return 1;
		}
	
	}
}
