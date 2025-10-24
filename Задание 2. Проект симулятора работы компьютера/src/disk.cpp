#include "disk.h"
#include "ram.h"
#include <fstream>

void save(){
	std::ofstream dates("data.txt");
	std::vector<int> buffer = read();
	
	for (int i = 0; i < sizeof(buffer); i++) {
		dates << buffer[i];
	}

	dates.close();
}

void load() {
	int nums[8];
	std::ifstream dates("data.txt");
	for (int i = 0; i < 8; i++) {
		dates >> nums[i];
	}
	write(nums);
	dates.close();
}