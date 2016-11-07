#ifndef MAIN_H
#define MAIN_H	

#include "Prompter.h"

class Main
{
public:
	Main(int argc, char *argv[]);

	static void resumeMain(Prompter*);
};

#endif //MAIN_H