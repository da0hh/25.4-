#include "ram.h"
#include "cpu.h"
#include "disk.h"
#include "gpu.h"
#include "kbd.h"
#include <string>
#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

int main(){
	setlocale(LC_ALL, "RU");
	string command;

	do {
		cout << "Enter command: "; cin >> command;
		if (command == "sum") {
			compute();
			display();
		}
		else if (command == "save") {
			save();
		}
		else if (command == "load") {
			load();
		}
		else if (command == "input") {
			int nums[8];
			cout << "Enter 8 numbers: ";
			for (int i = 0; i < 8; i++) {
				cin >> nums[i];
			}
			input(nums);
		}
		else if (command == "display") {
			display();
		}
		else if (command == "exit") break;
		else {
			cerr << "Unknown command\n";
			return 1;
		}
	} 
	while (command != "exit");
}
