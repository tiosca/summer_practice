#pragma once
#include <iostream>

void printVector(int* v, int n) {
	for (int i = 0; i < n-1; i++) {
		std::cout << v[i] << ", ";
	}
	std::cout << v[n - 1] << std::endl;
}