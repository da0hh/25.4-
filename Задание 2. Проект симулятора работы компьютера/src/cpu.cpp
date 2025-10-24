#include "cpu.h"
#include "ram.h"
#include <iostream>
#include <string>
#include <vector>

void compute() {
	int sum = 0;
	int forRes[8];
	std::vector<int> buffer = read();

	for (int i = 0; i < 8; i++) {
		forRes[i] = buffer[i];
	}

	for (int i = 0; i < 8; i++) {
		sum += forRes[i];
	}
	std::cout << sum << std::endl;
}
