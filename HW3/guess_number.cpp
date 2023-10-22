#include <iostream>
#include <string>

#include "argument.h"
#include "check_value.h"
#include "high_scores.h"
#include "random_value.h"

//#define DEBUG //For debug output - in release must be remarked

int main(int argc, char const *argv[])
{
    //Test execution argument from "argument.cpp"
    int max_value = get_int_arg(argc, argv, "-max");
    if (max_value <= 0) max_value = 100;
    #ifdef DEBUG
	    std::cout << "max_value = " << max_value << std::endl;
    #endif

    //Get random value from "random_value.cpp"
    const int rand_value = get_rand_int(max_value);
    #ifdef DEBUG
	    std::cout << "rand_value = " << rand_value << std::endl;
    #endif

	// Ask about name
	std::cout << "Hi! Enter your name, please:" << std::endl;
	std::string user_name;
	std::cin >> user_name;

    //Make game from "check_value.cpp"
    int attempts_count = 1;
    while (!check_int_value(rand_value)) {
	    std::cout << "You make: "<< attempts_count << " attempts!" <<  std::endl;
        ++attempts_count;
    }

    //Store score from "high_scores.cpp"
    store_score(user_name, attempts_count);
    return 0;
}

