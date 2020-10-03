#include <iostream>


int main() {
	int i = 10;
	int* p = &i;
	int* p_to_p = (int*)&p;

	int* p_to_p_to_p = (int*)&p_to_p;
	
	***(int***)p_to_p_to_p = 20;
	
	return 0;

}
