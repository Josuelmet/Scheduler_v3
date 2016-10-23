#include "main.h"

int main(int argc, char *argv[])
{
	Prompter *prompt = new Prompter(argc, argv);
	//TODO:jcr Sync with online branch.
	//TODO:jcr Throw exceptions that can be read if guiSuccess != 0 and if parentPrompter == nullptr.
	//throw exception("ha"); //?
	//TODO:jcr Figure out how to qDebug() contents of a QString*.
	//TODO:jcr Look at the JavaFX project to see how the post-GUI execution (e.g., secondMain) works.
	//TODO:jcr Figure out how to use iterator for loops.
	//TODO:jcr Close the GUI when Enter is pressed.
	//TODO:jcr Execute the rest of this program when Enter is pressed.
	//TODO:jcr Add the other features of the JavaFX (e.g., Writer) to this project.
	//TODO:jcr Add the Desktop opener to main.
	//TODO:jcr The first task goes from right to left when using Tab - why? Order of instantiation in the XML?s
	//TODO:jcr Check if parentPrompter in scheduler3gui.cpp is null before using it in handleEnter()?
	return 0;

}


void Main::resumeMain()
{
	//code here
}
