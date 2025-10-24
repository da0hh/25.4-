#include "ram.h"
#include "kbd.h"
#include "gpu.h"
#include <iostream>


int buffer[8];

void write(int nums[8]) {
	for (int i = 0; i < sizeof(nums); i++) {
		buffer[i] = nums[i];
	}
}

std::vector<int> read() {
	std::vector<int> res;
	for (int i = 0; i < 8; i++) {
		res.push_back(buffer[i]);
	}
	return res;
}
