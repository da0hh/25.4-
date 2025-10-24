#include "cpu.h"
#include "ram.h"
#include <iostream>
#include <string>
#include <vector>

void compute() {
	int sum = 0;
	std::vector<int> buffer = read();
	for (int i = 0; i < sizeof(buffer); i++) {
		sum += buffer[i];
	}
	std::cout << sum;
}
