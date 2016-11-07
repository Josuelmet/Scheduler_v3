#include "scheduler3gui.h"
#include "Prompter.h"



Prompter::Prompter(int argc, char *argv[])
{
	//Create and initialize tasks.
	tasks = new vector<Task*>();

	//Run Scheduler GUI.
	int guiSuccess = runScheduler3GUI(argc, argv);
	//Throw an error if the GUI execution did not return 0.
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
	a = new QApplication(argc, argv);
	Scheduler3GUI w;
	w.show();
	w.setPrompter(this);
	return a->exec();
}