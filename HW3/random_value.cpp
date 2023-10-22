#include <iostream>

#include <cstdlib>
#include <ctime>

const int get_rand_int(int max_val) {
	int rand_val = 0;
	
	if (max_val == 0) return 0;
	
	std::srand(std::time(nullptr)); // use current time as seed for random generator
	
	do { //Wait until andom number not equal 0
		rand_val = std::rand() % abs(max_val);
	} while (rand_val == 0);
	
	return rand_val;
}