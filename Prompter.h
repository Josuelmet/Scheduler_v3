#ifndef PROMPTER_H
#define PROMPTER_H

#include <QtWidgets/QApplication>
#include "Task.h"
#include <vector>


class Prompter
{

public:
	Prompter(int argc, char *argv[]);
	//Destructor is not needed; Rule of Three.

	void setTasks(vector<Task*> *inputTasks);
	vector<Task*>* getTasks();


private:
	QApplication *a;
	vector<Task*> *tasks;

	int runScheduler3GUI(int argc, char *argv[]);
};


#endif //PROMPTER_H