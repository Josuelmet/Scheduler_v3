#include "scheduler3gui.h"
#include "Prompter.h"
#include <QtWidgets/QApplication>



Prompter::Prompter(int argc, char *argv[])
{
	//Create and initialize tasks.
	tasks = new vector<Task*>();
	//Run Scheduler GUI.
	int guiSuccess = runScheduler3GUI(argc, argv);

	if (guiSuccess != 0)
		throw std::runtime_error("GUI Failed");
}


void Prompter::setTasks(vector<Task*> *inputTasks)
{
	tasks = inputTasks;
}


vector<Task*>* Prompter::getTasks()
{
	return tasks;
}



int Prompter::runScheduler3GUI(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Scheduler3GUI w;
	w.setPrompter(this);
	w.show();
	return a.exec();
}