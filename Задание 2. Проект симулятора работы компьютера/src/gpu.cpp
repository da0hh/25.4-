#include "gpu.h"
#include "ram.h"
#include <iostream>

void display() {
	std::vector<int> buffer = read();
	for (int i = 0; i < sizeof(buffer); i++) {
		std::cout << buffer[i] << " ";
	}
}