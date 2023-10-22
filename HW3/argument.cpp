#include <iostream>
#include <string>

int get_int_arg(int argc, const char** argv, std::string arg_name) {

	// To check - does use print some other argument we should check if the argc >= 2
	if (argc >= 2) {
		std::string arg1_value{ argv[1] };
		if (arg1_value == arg_name) {
			int parameter_value = 0;
			if (argc < 3) {//Return -1 mean argiment not defined
				return -1;
			}
			// We need to parse the string to the int value
			parameter_value = std::stoi(argv[2]);
			return parameter_value;
		}
	}
	return 0;//0-No such arguments
}