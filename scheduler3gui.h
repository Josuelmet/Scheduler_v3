#ifndef SCHEDULER3GUI_H
#define SCHEDULER3GUI_H

#include <QtWidgets/QMainWindow>
#include "ui_scheduler3gui.h"
#include "Task.h"
#include "Prompter.h"


namespace Ui {
	class Scheduler3GUI;
}


class Scheduler3GUI : public QMainWindow
{
	Q_OBJECT

public:
	explicit Scheduler3GUI(QWidget *parent = 0);
	~Scheduler3GUI();

	void setPrompter(Prompter* prompter);

	static const int INPUTS_PER_TASK = 3;


private:
	Ui::Scheduler3GUIClass *ui;
	Prompter* parentPrompter;
	QGridLayout *gridScrollLayout;
	QWidget *scrollContents;

	static const int GRID_INDEX_OF_INIT_TIME = 0;
	static const int GRID_INDEX_OF_DESCRIPTION = 1;
	static const int GRID_INDEX_OF_END_TIME = 2;
	
	void initializeButtons();
	void initializeCSS(const char *ch);
	string getTimeAsString(QWidget* timeWidget);
	QWidget* getWidgetAtPosition(int row, int column);
	Task* getTaskInputAt(int row);
	vector<Task*>* getTaskInputs();


private slots:
	void handleAddTask();
	void handleEnter();
};

#endif // SCHEDULER3GUI_H
