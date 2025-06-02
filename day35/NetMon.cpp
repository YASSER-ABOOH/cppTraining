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

};


class Logger{

}

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