#include<iostream>
#include<fstream>
#include<vector>
#include<chrono>
#include<thread>
#include<string>
#include<algorithm>


using namespace std;

enum LogginLevel
{	INFO, DEBUG, WARNING, ERROR};

class Logger
{
	ofstream fileOut;
public:
	Logger(const char* f1)
	{
		try
		{
			fileOut.open(f1, ios::app);
			if (!fileOut.is_open())
			{
				throw"Error opening file";
			}
		}
		catch (string s)
		{
			cout << s;
			exit(0);
		}
	}

	const char* logleveltostring(int level);

	void log(int level, const char* str);
};
void Logger::log(int level, const char* str)
{
	fileOut << "[" << logleveltostring(level) << "]" << str << endl;
}
const char* Logger::logleveltostring(int level)
{
	switch (level)
	{
	case 1:
		return "INFO";
		break;
	case 2:
		return "DEBUG";
		break;
	case 3:
		return "WARNING";
		break;
	case 4:
		return "ERROR";
		break;
	}
}
class Job
{
private:
	int jobId;
	int executionTime;
	int priority;
public:
	void setId(int JobId)
	{
		this->jobId = JobId;
	}
	int getId()
	{
		return jobId;
	}
	void setExecTime(int executionTime)
	{
		this->executionTime = executionTime;
	}
	int getExecTime()
	{
		return executionTime;
	}
	void setPriority(int priority)
	{
		this->priority = priority;
	}
	int getPriority()
	{
		return priority;
	}
	void displayJob();
	int executeJob(Logger& ob);
};
void Job::displayJob()
{
	cout << "Job ID: " << jobId << endl;
	cout << "Execution Time: " << executionTime << endl;
	cout << "Priority: " << priority << endl;
}
int Job::executeJob(Logger& ob)
{
	auto start = chrono::system_clock::now();
	this_thread::sleep_for(chrono::milliseconds(executionTime));
	auto end = chrono::system_clock::now();
	auto duration = chrono::duration_cast<chrono::milliseconds>(end - start);
	char msg[100];
	sprintf(msg, "Executing Job ID: %d | Priority: %d | ExecTime %dms", jobId, priority, duration.count());
	ob.log(1, msg);
	return duration.count();
}




class Queue
{
protected:
	vector<Job>arr;
	int totalTime;
	bool isPriority;
public:
	Queue()
	{
		Job j;
		totalTime = 0;
		int val;
		isPriority = false;
		ifstream inFile;
		try
		{
			inFile.open("job.txt", ios::in);
			if (!inFile.is_open())
				throw "File cannot be opened";
		}
		catch (const char* s)
		{
			cout << s << endl;
			exit(0);
		}
		while (!inFile.eof())
		{
			inFile >> val;
			j.setId(val);
			inFile >> val;
			j.setExecTime(val);
			inFile >> val;
			j.setPriority(val);
			arr.push_back(j);
		}
	}

	void executeQueue(Logger& ob)
	{
		if (isPriority == true)
		{
			sortPriority();
		}
		for (auto i : arr)
		{
			totalTime += i.executeJob(ob);
		}
	}

	int getTotTime()
	{
		return totalTime;
	}

	void setPriority(bool isPriority)
	{
		this->isPriority = isPriority;
	}
	void sortPriority();
};
bool compareJobs(Job obj1, Job obj2)
{
	return obj1.getPriority() < obj2.getPriority();
}
void Queue::sortPriority()
{
	sort(arr.begin(), arr.end(), compareJobs);
}


int main()
{
	while (1) {
		cout << "CPU SCheduler";
		int options;
		cout << "1. Load jobs from file" << endl;
		cout << "2. Choose scheduling algorithm " << endl;
		cout << "a. FIFO(job ID)" << endl;
		cout << "b. Priority Based" << endl;
		cout << "3. Execute Jobs" << endl;
		cout << "4. Export Log" << endl;
		cout << "5. Exit" << endl;
		cin >> options;
		char msg[20], alg;
		Queue q;
		Logger l("job_log.txt");
		switch (options)
		{
		default:
			break;
		case 1:
			l.log(INFO, "Successfully loaded Jobs");
			break;
		case 2:
			cin >> alg;
			if (alg == 'b')
			{
				q.setPriority(true);
				l.log(INFO, "Selected Priority Scheduling");
			}
			else
			{
				l.log(INFO, "Selected FIFO Scheduling");
			}
			break;
		case 3:
			q.executeQueue(l);
			sprintf(msg, "All jobs executed in %dms", q.getTotTime());
			l.log(INFO, msg);
			break;
		case 4:
			l.log(INFO, "Log saved to job_log.txt");
			break;
		case 5:
			exit(0);
			break;
		}
	}
}