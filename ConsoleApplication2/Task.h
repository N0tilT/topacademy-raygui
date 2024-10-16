#ifndef TASK_H
#define TASK_H

#include <string>
#include <nlohmann/json.hpp>

using json = nlohmann::json;
using namespace std;

class Task
{
public:
	int id;
	string title;
	string description;

	Task(int id, const string& title, const string& description);
	Task(int id, const Task& other);

	json toJson() const;
	static Task fromJson(const json& j);
	string ToString();
};

#endif // !TASK_H

