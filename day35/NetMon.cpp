#include<iostream>
//#include<chrono>
#include<fstream>
//#include<string>
//#include<thread>
#include<vector>

using namespace std;

enum LogLevel { INFO, DEBUG, WARNING, ERROR };

class Packet
{
protected:
	int packetID;
	string protocol;
	int size;
public:
	void setId(int packetID)
	{
		this->packetID = packetID;
	}
	int getId()
	{
		return packetID;
	}
	void setProtocol(string protocol)
	{
		this->protocol = protocol;
	}
	string getProtocol()
	{
		return protocol;
	}
	void setSize(int size)
	{
		this->size = size;
	}
	int getSize()
	{
		return size;
	}
	void display();
	
};

void Packet::display()
{
	cout << "ID: " << packetID << endl;
	cout << "Protocol: " << protocol << endl;
	cout << "Size: " << size << endl;
}

class Queue {
private:
	vector<Packet>arr;
public:
	void loadPacket();
	void exportLog(Logger& lOb)
	{

		for (auto i : arr)
		{
			char msg[60];
			sprintf(msg, "Packet ID: %d | Protocol: %s | Size %d", i.getId(), (i.getProtocol()).c_str(), i.getSize());
			if (i.getSize() > 1000)
			{
				lOb.log(2, msg);
			}
			else
			{
				lOb.log(1, msg);
			}
			cout << endl;
		}
	}

	void filterByProtocol(string proto)
	{
		for (auto i : arr)
		{
			if (i.getProtocol() == proto)
			{
				cout << "Packet" << i.getId() << " | " << i.getProtocol() << " | " << i.getSize() << endl;
			}
		}
	}

	void detectLargePackets()
	{
		for (auto i : arr)
		{
			if (i.getSize() > 1000)
			{
				cout << "Packet " << i.getId() << " | " << i.getProtocol() << " | " << i.getSize() << endl;
			}
		}
	}
};
void Queue::loadPacket()
{
	int pi, s;
	string pr;
	Packet p;
	ifstream inFile;
	try
	{
		inFile.open("packets.txt", ios::in);
		if (!inFile.is_open())
		{
			throw"File can't be opened";
		}
	}
	catch (const char* s)
	{
		cout << s;
		exit(0);
	}
	while (!inFile.eof())
	{
		inFile >> pi;
		p.setId(pi);
		inFile >> pr;
		p.setProtocol(pr);
		inFile >> s;
		p.setSize(s);
		arr.push_back(p);
	}
}



class Logger {
	ofstream outFile;
public:
	Logger(const char* f1)
	{
		try
		{
			outFile.open(f1, ios::out);
			if (!outFile.is_open())
			{
				throw "File already opened";
			}
		}
		catch (string s)
		{
			cout << s << endl;
			exit(0);
		}
	}

	const char* logleveltostring(int level)
	{
		switch (level)
		{
		default:
			break;
		case 0:
			return "INFO";
			break;
		case 1:
			return "DEBUG";
			break;
		case 2:
			return "WARNING";
			break;
		case 3:
			return "ERROR";
			break;
		}
	}

	void log(int level, const char* str)
	{
		outFile << "[" << logleveltostring(level) << "]" << str << endl;
		outFile.flush();
	}

};

int main()
{
	Queue q;
	Logger l("netmon_log.txt");
	cout << "NetMon" << endl;
	cout << "1. Load Packet Data " << endl;
	cout << "2. Filter by protocol" << endl;
	cout << "3. Check for Large Packets " << endl;
	cout << "4. Export Logs " << endl;
	cout << "5. Exit" << endl;

	while (1)
	{
		int options;
		cin >> options;
		switch (options)
		{
		case 1:
			q.loadPacket();
			break;
		case 2:
		{
			string pro;
			cin >> pro;
			q.filterByProtocol(pro);
			break;
		}
		case 3:
			q.detectLargePackets();
			break;
		case 4:
			cout << "In here\n";
			q.exportLog(l);
			break;
		case 5:
			exit(0);
			break;
		}
	}


}