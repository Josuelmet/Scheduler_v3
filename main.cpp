#include "scheduler3gui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	//TODO:jcr Throw guiSuccess in Prompter if the GUI did not run successfully.
	//TODO:jcr Look at the JavaFX project to see how the post-GUI execution (e.g., secondMain) works.
	//TODO:jcr Check the text output by using qDebug().
	/*
	For the text output, primarily use:
	for(std::vector<T>::iterator it = v.begin(); it != v.end(); ++it)
	{
    it->doSomething();
	}
	OR
	for(std::vector<T>::size_type i = 0; i != v.size(); i++) {
	v[i].doSomething();
	}
	*/
	//TODO: Make a new Prompter here in main.
	//TODO: Add the other features of the JavaFX (e.g., Writer) to this project.
	//TODO: Add the Desktop opener to main.
}
