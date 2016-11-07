#ifndef WRITER_H
#define WRITER_H

#include <fstream>
#include "Task.h"
#include <vector>

using namespace std;


class Writer
{

public:
	static void write(string, vector<Task*>*);


private:
	static string concatWithNewlines(vector<string>);

	static const char ENDLINE = '\n';

};


#endif //WRITER_H