#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<fstream>
#include<thread>
#include<chrono>
#include<mutex>
#include<condition_variable>

//using namespace std;
std::mutex m1, m2;
std::condition_variable c;

class Admin
{
protected:
	std::string username;
	int userpin;
	
public:
	std::vector<Admin>user;
	/*Admin(std::string uname,int upin):username(uname),userpin(upin){}
	std::string getuname()const { return username; }
	int getupin()const { return userpin; }*/
	void signup()
	{
		Admin u1;
		std::cout << "Enter Your User Name"<<std::endl;
		std::cin >> username;
		std::cout << "Enter Your Pin" << std::endl;
		std::cin >> userpin;

		for (Admin u : user)
		{
			if (u1.username == u.username)
			{
				std::cout << "User exists"<<std::endl;
				return;
			}
			else
			{
				user.push_back(u1);
				return;
			}
		}
	}
	void login()
	{
		std::string un;
		int up;
		std::cout << "Enter User Name" << std::endl;
		for (Admin u : user)
		{
			if (u.username == un)
			{
				std::cout << "Create a pin" << std::endl;
				std::cin >> up;
				if (u.userpin == up)
				{
					std::cout << "Welcome" << std::endl;
					return;
				}
				else
					std::cout << "Invalid User Pin" << std::endl;
			}
			else
				std::cout << "Invalid User Name" << std::endl;
		}
	}
	
};

void parse1r(std::string& str, char char1, char char2)
{
	for (int i = 0; i < str.size(); i++)
	{
		if (str[i] == char1)
		{
			str[i] = char2;
		}
	}
}

void parse2s(const std::string& str, std::vector<std::string>& line2) {
	line2.clear();
	std::string line = "";
	for (size_t i = 0; i < str.size(); i++) {
		if (str[i] == ' ') {
			if (line != "") {
				line2.push_back(line);
				line = "";
			}
		}
		else
			line += str[i];
	}
	if (line != "") 
		line2.push_back(line);
}
bool check(const std::string& m1, const std::string& m2) {
	return m1 == m2;
}

class Interoperator
{
protected:
	std::string opNo;
	std::string opBrandName;
	int inccall = 0;
	int outcall = 0;
	int incsms = 0;
	int outsms = 0;
	int downdata = 0;
	int updata = 0;
public:
	std::vector<Interoperator>iodata;
   void getOperator(const std::string& no, const std::string& name)
	{
		for (int i = 0; i < iodata.size(); i++)
		{
			if (iodata[i].opNo == no)
			{
				return;
			}
		}
		Interoperator io;
		io.opNo = no;
		io.opBrandName = name;
		iodata.push_back(io);
		return;
	}
	void proOper(const std::string&opBranName)
	{
		std::ifstream file("data.txt");
		if (!file.is_open())
		{
			std::cout << "Cannot open CDR file." << std::endl;
			return;
		}
		std::string line;
		while (getline(file, line)) {
			if (line.empty()) continue;

			parse1r(line, '|', ' ');
			std::vector<std::string> idata;
			parse2s(line, idata);
			if (idata.size() < 9) continue;

			std::string MSISDN = idata[0];
			std::string operatorBrand = idata[1];
			std::string operatorMMC = idata[2];
			std::string callType = idata[3];
			int duration = stoi(idata[4]);
			int download = stoi(idata[5]);
			int upload = stoi(idata[6]);
			std::string thirdPartyMSISDN = idata[7];
			std::string thirdPartyMMC = idata[8];

			
			Interoperator* i;// = getOperator(operatorMMC, operatorBrand);

			if (callType == "MOC")
				i->outcall += duration;
			else if (callType == "MTC")
				i->inccall += duration;
			else if (callType == "SMS-MO")
				i->outcall += 1;
			else if (callType == "SMS-MT")
				i->incsms += 1;
			else if (callType == "GPRS") {
				i->downdata += download;
				i->updata += upload;
			}

			
		}
		

	}
	void dispIO()
	{
		for (int i = 0;i < iodata.size();i++)
		{
			std::cout << "#Operator Data Base:" << std::endl;
			std::cout << "Operator Brand: " << opBrandName[i] << " (" << opNo[i] << ")" << std::endl;
			std::cout << "Incoming voice call durations: " << inccall << std::endl;
			std::cout << "Outgoing voice call durations: " << outcall << std::endl;
			std::cout << "Incoming SMS messages: " << incsms << std::endl;
			std::cout << "Outgoing SMS messages: " << outsms << std::endl;
			std::cout << "MB downloaded: " << downdata << "\t|\tMB uploaded: " << updata << std::endl;
		}
	}
	};
	class Customer
	{
	protected:
		std::string opNo;
		std::string msisdn;
		std::string opBrandName;
		int inccall = 0;
		int outcall = 0;
		int incsms = 0;
		int outsms = 0;
		int downdata = 0;
		int updata = 0;
	public:
		std::vector<Customer>cudata;
		void getCust(const std::string& ms, const std::string& name, const std::string& no)
		{
			for (int i = 0; i < cudata.size(); i++)
			{
				if (cudata[i].msisdn == ms)
					return;
			}
			Customer c;
			c.msisdn = ms;
			c.opBrandName = name;
			c.opNo = no;
			cudata.push_back(c);
			return;
		}
		void proCust(const std::string& mmcno)
		{
			std::ifstream file("data.txt");
			if (!file.is_open())
			{
				std::cout << "Cannot open CDR file." << std::endl;
				return;
			}
			std::string line;
			while (getline(file, line)) {
				if (line.empty())
					continue;

				parse1r(line, '|', ' ');

				std::vector<std::string> cdata;
				parse2s(line, cdata);

				if (cdata.size() < 7) continue;

				std::string MSISDN = cdata[0];
				std::string operatorBrand = cdata[1];
				std::string operatorMMC = cdata[2];
				std::string callType = cdata[3];
				int duration = stoi(cdata[4]);
				int download = stoi(cdata[5]);
				int upload = stoi(cdata[6]);
				std::string thirdPartyMSISDN = cdata[7];
				std::string thirdPartyMMC = cdata[8];

				Customer* c;

				bool isWithinOperator = check(operatorMMC, mmcno);
				bool thirdPartyWithin = check(thirdPartyMMC, mmcno);

				if (callType == "MOC") {
					if (isWithinOperator && thirdPartyWithin)
						c->outcall += duration;
					else
						c->outcall += duration;
				}
				else if (callType == "MTC") {
					if (isWithinOperator && thirdPartyWithin)
						c->inccall += duration;
					else
						c->inccall += duration;
				}
				else if (callType == "SMS-MO") {
					if (isWithinOperator && thirdPartyWithin)
						c->outsms += 1;
					else
						c->outsms += 1;
				}
				else if (callType == "SMS-MT") {
					if (isWithinOperator && thirdPartyWithin)
						c->incsms += 1;
					else
						c->incsms += 1;
				}
				else if (callType == "GPRS") {
					c->downdata += download;
					c->updata += upload;
				}
			}

		}
		void dispC()
		{
			for(int i=0;i<cudata.size();i++)
			std::cout << "# Customers Data Base:" << std::endl;
			std::cout << "Customers ID: " << msisdn << " (" << opBrandName << ")" << std::endl;
			std::cout << "* Services within the mobile operator *" << std::endl;
			std::cout << "Incoming voice call durations: " << inccall[i] << std::endl;
			std::cout << "Outgoing voice call durations: " << outcall[i] << std::endl;
			std::cout << "Incoming SMS messages: " <<incsms[i]<< std::endl;
			std::cout << "Outgoing SMS messages: " << outsms[i] << std::endl;
			std::cout << "* Services outside the mobile operator *" << std::endl;
			std::cout << "Incoming voice call durations: " <<inccall[i] <<std::endl;
			std::cout << "Outgoing call durations: " << outcall[i] << std::endl;
			std::cout << "Incoming SMS messages: " << incsms[i] << std::endl;
			std::cout << "Outgoing SMS messages: " << outsms[i] << std::endl;
			std::cout << "* Internet use *" << std::endl;
			std::cout << "MB downloaded: " << downdata[i] << "\t|\tMB uploaded" << updata[i] << std::endl;
		}
	};
	//	Record(int msisdn,std::string opname,int opno,std::string ctype,int moc,int mtc,int smsmo,int smsmt,int gprs):
//		msisdn(msisdn),opname(opname),opno(opno),ctype(ctype),moc(moc),mtc(mtc),smsmo(smsmo),smsmt(smsmt),gprs(gprs){}
//	int getmsisdn()const { return msisdn; }
//	std::string getopname()const { return opname; }
//	int getopno()const { return opno; }
//	std::string getctype()const { return ctype; }
//	int getmoc()const { return moc; }
//	int getmtc()const { return mtc; }
//	int getsmsmo()const { return smsmo; }
//	int getsmsmt()const { return smsmt; }
//	int getgprs()const { return gprs; }
//protected:
//	void parse(const std::string& input1, std::string& ms, std::string& opna, std::string& opno, std::string& ct, std::string& mc, std::string& mt, std::string& so, std::string& st, std::string& gp)
//	{
//		ms = "";
//		opna = "";
//		opno = "";
//		ct = "";
//		mc = "";
//		mt = "";
//		so = "";
//		st = "";
//		gp = "";
//		std::string input2 = input1;
//
//		while (input2.find('|') != std::string::npos)
//			input2[input2.find('|')] = ' ';
//
//		bool flag = false;
//		std::string newstr = "";
//
//		for (char a : input2)
//		{
//			if (!flag && !newstr.empty())
//			{
//				newstr = ' ';
//				flag = 1;
//			}
//			else
//			{
//				newstr += a;
//				flag = 0;
//			}
//		}
//		size_t s1 = newstr.find(' ');
//		if (s1 == std::string::npos)
//		{
//			ms = newstr;
//			return;
//		}
//		ms = newstr.substr(0, s1);
//
//		size_t s2 = newstr.find(' ', s1 + 1);
//		if (s2 == std::string::npos)
//		{
//			opna = newstr.substr(s1 + 1);
//			return;
//		}
//		opna = newstr.substr(0, s2);
//
//		size_t s3 = newstr.find(' ', s2 + 1);
//		if (s3 == std::string::npos)
//		{
//			opno = newstr.substr(s2 + 1);
//			return;
//		}
//		opno = newstr.substr(0, s3);
//
//		size_t s4 = newstr.find(' ', s3 + 1);
//		if (s4 == std::string::npos)
//		{
//			ct = newstr.substr(s3 + 1);
//			return;
//		}
//		ct = newstr.substr(0, s4);
//
//		size_t s5 = newstr.find(' ', s4 + 1);
//		if (s5 == std::string::npos)
//		{
//			mc = newstr.substr(s4 + 1);
//			return;
//		}
//		mc = newstr.substr(0, s5);
//
//		size_t s6 = newstr.find(' ', s5 + 1);
//		if (s6 == std::string::npos)
//		{
//			mt = newstr.substr(s5 + 1);
//			return;
//		}
//		mt = newstr.substr(0, s6);
//
//		size_t s7 = newstr.find(' ', s6 + 1);
//		if (s7 == std::string::npos)
//		{
//			so = newstr.substr(s6 + 1);
//			return;
//		}
//		so = newstr.substr(0, s7);
//
//		size_t s8 = newstr.find(' ', s7 + 1);
//		if (s8 == std::string::npos)
//		{
//			st = newstr.substr(s7 + 1);
//			return;
//		}
//		st = newstr.substr(0, s8);
//
//		size_t s9 = newstr.find(' ', s8 + 1);
//		if (s9 == std::string::npos)
//		{
//			gp = newstr.substr(s8 + 1);
//			return;
//		}
//		gp = newstr.substr(0, s9);
//
//		ms = newstr.substr(s1 + 1, s2 - s1 - 1);
//		opna = newstr.substr(s2 + 1, s3 - s2 - 1);
//		opno = newstr.substr(s3 + 1, s4 - s3 - 1);
//		ct = newstr.substr(s4 + 1, s5 - s4 - 1);
//		mc = newstr.substr(s5 + 1, s6 - s5 - 1);
//		mt = newstr.substr(s6 + 1, s7 - s6 - 1);
//		so = newstr.substr(s7 + 1, s8 - s7 - 1);
//		st = newstr.substr(s8 + 1, s9 - s8 - 1);
//		gp = newstr.substr(s9 + 1);
//
//	}
//	
//	int* getOperand(const std::string& op, int& value)
//	{
//		if (op.empty())
//			return nullptr;
//		//if()
//		
//
//
//	}



	void mainMenu()
	{
		std::cout << "___________________________\n";
		std::cout << "Welcome to CDR\n";
		std::cout << "1.Sign Up\n";
		std::cout << "2.Login\n";
		std::cout << "3.Exit\n";
		std::cout << "Enter your choice\n";
	}

	int main()
	{
		mainMenu();
		int n;
		std::cin >> n;
		Admin a;
		switch (n)
		{
		case 1:
			a.signup();
			break;
		case 2:
			a.login();
			break;
		case 3:
			std::cout << "Exiting..." << std::endl;
			break;
		}

	}