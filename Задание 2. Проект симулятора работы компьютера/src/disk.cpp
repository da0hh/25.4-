#include "disk.h"
#include "ram.h"
#include <fstream>
#include <iostream>

void save(){
	std::ofstream dates("data.txt");
	int forRes[8];
	std::vector<int> buffer = read();

	for (int i = 0; i < 8; i++) {
		forRes[i] = buffer[i];
	}

	for (int i = 0; i < 8; i++) {
		dates << forRes[i] << " ";
	}

	std::cout << "Данные сохранены\n";

	dates.close();
}

void load() {
	int nums[8];
	std::ifstream dates("data.txt");

	if (!dates) {
		std::cerr << "Ошибка открытия файла для чтения." << std::endl;
		return;
	}

	for (int i = 0; i < 8; i++) {
		dates >> nums[i];
	}

	write(nums);
	
	std::cout << "Данные выгружены\n";

	dates.close();
}