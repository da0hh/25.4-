#include "physic.h"
#include <iostream>
#include <string>
#include <vector>



void scalpel(double x, double y) {
	std::cout << "Был проведен разрез между координатами (" << x << ";" << y << ").\n";
}

void hemostat(double dot) {
	std::cout << "Был проведен зажим в точке " << dot << std::endl;
}

void tweezers(double dot) {
	std::cout << "Вы использовали пинцет в точке " << dot << std::endl;
}

void suture(double x, double y) {
	std::cout << "Был проведен шов между координатами " << x << ";" << y << std::endl;
}

