#pragma once
#include <iostream>


void test_static() {
	static int test_static_var = 0;
	test_static_var++;
	std::cout << "Test Static Variable: " << test_static_var << std::endl;
}

void exemplu_6() {
	test_static();
	test_static();
	test_static();
	test_static();
}
