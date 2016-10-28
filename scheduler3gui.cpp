#include "scheduler3gui.h"
#include "Task.h"
#include <QDebug>
#include <QFile>
#include <QTimeEdit>


Scheduler3GUI::Scheduler3GUI(QWidget *parent)
	: QMainWindow(parent), ui(new Ui::Scheduler3GUIClass)
{
	ui->setupUi(this);

	initializeButtons();
	initializeCSS("scheduler3gui.css");

	//Get the QScrollArea and QGridLayout from the GUI.
	scrollContents = ui->centralWidget->findChild<QScrollArea*>("scrollArea")->findChild<QWidget*>("scrollContents");
	gridScrollLayout = (QGridLayout*)scrollContents->findChild<QGridLayout*>("gridLayout");
}


Scheduler3GUI::~Scheduler3GUI()
{
	delete ui;
}


void Scheduler3GUI::setPrompter(Prompter *p)
{
	parentPrompter = p;
	if (parentPrompter == nullptr)
		throw std::invalid_argument("received negative value");
}


//Use signals and slots to connect buttons to their handlers.
void Scheduler3GUI::initializeButtons()
{
	QPushButton *addTask = ui->centralWidget->findChild<QPushButton*>("addTask");
	connect(addTask, SIGNAL(released()), this, SLOT(handleAddTask()) );

	QPushButton *enter = ui->centralWidget->findChild<QPushButton*>("enter");
	connect(enter, SIGNAL(released()), this, SLOT(handleEnter()) );
}


//Add fileName css file to the GUI.
void Scheduler3GUI::initializeCSS(const char *fileName)
{
	QFile file(fileName);
	file.open(QFile::ReadOnly);
	QString styleSheet = QLatin1String(file.readAll());
	qApp->setStyleSheet(styleSheet);
}


string Scheduler3GUI::getTimeAsString(QWidget* timeWidget)
{
	const QString QTIME_LAYOUT = "h:mm AP";

	//Get the QTime from the QTimeEdit widget.
	QTime time = dynamic_cast<QTimeEdit*>(timeWidget)->time();
	//Format the time.toString() to include AM/PM and to exclude anything beyond the seconds.
	//Convert the toString() to an std::string.
	return time.toString(QTIME_LAYOUT).toStdString();
}


QWidget* Scheduler3GUI::getWidgetAtPosition(int row, int column)
{
	//Return the Widget in the LayoutItem in the GridLayout at (row, column).
	return gridScrollLayout->itemAtPosition(row, column)->widget();
}


Task* Scheduler3GUI::getTaskInputAt(int row)
{
	//Get the QLineEdit and its text input from this task (row).
	QLineEdit *description = dynamic_cast<QLineEdit*>(getWidgetAtPosition(row, GRID_INDEX_OF_DESCRIPTION));
	string descriptionText = description->text().simplified().toStdString();

	//Skip the row if the description is blank.
	if (!descriptionText.compare("")) //compare returns 0 if the two QStrings are equal; reverse the returned value.
		return nullptr;

	//Get the time inputs in this task as strings.
	string initTimeText = getTimeAsString(getWidgetAtPosition(row, GRID_INDEX_OF_INIT_TIME));
	string endTimeText = getTimeAsString(getWidgetAtPosition(row, GRID_INDEX_OF_END_TIME));

	//Add a new Task to the tasks.
	return new Task(initTimeText, descriptionText, endTimeText);
}


vector<Task*>* Scheduler3GUI::getTaskInputs()
{
	//NOTE:jcr This does not take into account any Spacers (if any).
	const short INDEX_OF_FIRST_TASK = 1;


	//Create and initialize tasks.
	vector<Task*> *tasksEntered = new vector<Task*>();

	//Cycle through each row of the grid, starting after Labels or Spacers.
	for (int row = INDEX_OF_FIRST_TASK; row < gridScrollLayout->rowCount(); row++)
	{
		Task* taskInput = getTaskInputAt(row);
		if (taskInput == nullptr)
			continue;
		tasksEntered->push_back(taskInput);
	}

	return tasksEntered;

}



void Scheduler3GUI::handleAddTask()
{
	//Subtract 1 from rowCount in because of the Spacer at the end of the GridLayout.
	const int ROW = gridScrollLayout->rowCount();

	//Add two new QTimeEdits and a new QLineEdit on the same row.
	gridScrollLayout->addWidget(new QTimeEdit(scrollContents), ROW, GRID_INDEX_OF_INIT_TIME);
	gridScrollLayout->addWidget(new QLineEdit(scrollContents), ROW, GRID_INDEX_OF_DESCRIPTION);
	gridScrollLayout->addWidget(new QTimeEdit(scrollContents), ROW, GRID_INDEX_OF_END_TIME);
}


void Scheduler3GUI::handleEnter()
{
	vector<Task*>* tasks = getTaskInputs();
	parentPrompter->setTasks(tasks);
	qDebug() << tasks;
	/*for (std::vector<Task*>::iterator task = tasks->begin(); task != tasks->end(); ++task)
	{
	task.
	}*/
	for (std::vector<Task*>::size_type i = 0; i != tasks->size(); i++) {
		for (int ch = 0; ch < 5; ch++)
		{
			QString *str = new QString(tasks->at(i)->taskDescription.at(ch));
			qDebug() << str->at(0);
		}
		//tasks[i]
	}
}