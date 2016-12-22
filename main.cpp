#include "main.h"
#include <Windows.h>
#include "Writer.h"

int main(int argc, char *argv[])
{
	Main execute(argc, argv);
	//Use Ctrl + M + O in Visual Studio to collapse all blocks.

	//TODO:jcr Add a pop-up after Enter?
	//TODO:jcr Close the GUI when Enter is pressed.
	//TODO:jcr Add comments to code.
	//TODO:jcr Replace CSS with QSS.
	//TOOD:jcr CSS? Padding in table? Center the table?
	return 0;
}


Main::Main(int argc, char *argv[])
{
	Prompter *prompt = new Prompter(argc, argv);
}


void Main::resumeMain(Prompter* inputPrompter)
{
	static const string FILE_NAME = "schedule.html";

	Writer::write(FILE_NAME, inputPrompter->getTasks());
}