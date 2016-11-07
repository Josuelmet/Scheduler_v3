#include "Writer.h"



string Writer::concatWithNewlines(vector<string> strings)
{
	string concatString = "";
	for (std::vector<string>::iterator str = strings.begin(); str != strings.end(); ++str)
	{
		concatString += *str + ENDLINE;
	}
	return concatString;
}


void Writer::write(string fileName, vector<Task*>* tasks)
{
	static const vector<string> INITIAL_HTML =
	{ 
		"<!DOCTYPE html>","<html>","<head>",
		"<title>Schedule</title>","</head>",
		"<body>","<table>","<tr>",
		"<th>Initial Time</th>",
		"<th>Task</th>",
		"<th>End Time</th>","</tr>" 
	};
	static const vector<string> ENDING_HTML = 
	{
		"</table>","</body>","</html>"
	};


	ofstream schedule(fileName);

	if (schedule.is_open())
	{
		schedule << concatWithNewlines(INITIAL_HTML);

		for (std::vector<Task*>::iterator task = tasks->begin(); task != tasks->end(); ++task)
		{
			Task *thisTask = *task;
			vector<string> taskStrings = 
			{
				"<tr>","<td>" + thisTask->initTime + "</td>",
				"<td>" + thisTask->taskDescription + "</td>",
				"<td>" + thisTask->endTime + "</td>","</tr>"
			};
			schedule << concatWithNewlines(taskStrings);
		}

		schedule << concatWithNewlines(ENDING_HTML);
	}
}