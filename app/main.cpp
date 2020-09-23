#include <iostream>
#include "../include/Application.h"

int main(int argc, char** argv) {
	char* config = argv[1];
	Application app(config);
	return 0;
}
