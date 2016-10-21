#ifndef TASK_H
#define TASK_H

#include <string>

using namespace std;

struct Task
{
	Task(string time1, string description, string time2)
	{
		initTime = time1;
		taskDescription = description;
		endTime = time2;
	}
	string initTime;
	string taskDescription;
	string endTime;
};

#endif //TASK_H