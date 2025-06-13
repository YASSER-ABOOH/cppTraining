#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<thread>
#include<mutex>
#include<condition_variable>

std::mutex m;
std::condition_variable c;

class Admin
{
protected:
	std::string username;
	int userpin;
public:
	Admin(std::string uname,int upin):username(uname),userpin(upin){}
	std::string getuname()const { return username; }
	int getupin()const { return userpin; }
};
class Record
{
protected:
	int msisdn;
	std::string opname;
	int opno;
	std::string ctype;
	int moc;
	int mtc;
	int smsmo;
	int smsmt;
	int gprs;
public:
	Record(int msisdn,std::string opname,int opno,std::string ctype,int moc,int mtc,int smsmo,int smsmt,int gprs):
		msisdn(msisdn),opname(opname),opno(opno),ctype(ctype),moc(moc),mtc(mtc),smsmo(smsmo),smsmt(smsmt),gprs(gprs){}
	int getmsisdn()const { return msisdn; }
	std::string getopname()const { return opname; }
	int getopno()const { return opno; }
	std::string getctype()const { return ctype; }
	int getmoc()const { return moc; }
	int getmtc()const { return mtc; }
	int getsmsmo()const { return smsmo; }
	int getsmsmt()const { return smsmt; }
	int getgprs()const { return gprs; }
protected:
	void parse(const std::string& input1, std::string& ms, std::string& opna, std::string& opno, std::string& ct, std::string& mc, std::string& mt, std::string& so, std::string& st, std::string& gp)
	{
		ms = "";
		opna = "";
		opno = "";
		ct = "";
		mc = "";
		mt = "";
		so = "";
		st = "";
		gp = "";
		std::string input2 = input1;

		while (input2.find('|') != std::string::npos)
			input2[input2.find('|')] = ' ';

		bool flag = false;
		std::string newstr = "";

		for (char a : input2)
		{
			if (!flag && !newstr.empty())
			{
				newstr = ' ';
				flag = 1;
			}
			else
			{
				newstr += a;
				flag = 0;
			}
		}
		size_t s1 = newstr.find(' ');
		if (s1 == std::string::npos)
		{
			ms = newstr;
			return;
		}
		ms = newstr.substr(0, s1);

		size_t s2 = newstr.find(' ', s1 + 1);
		if (s2 == std::string::npos)
		{
			opna = newstr.substr(s1 + 1);
			return;
		}
		opna = newstr.substr(0, s2);

		size_t s3 = newstr.find(' ', s2 + 1);
		if (s3 == std::string::npos)
		{
			opno = newstr.substr(s2 + 1);
			return;
		}
		opno = newstr.substr(0, s3);

		size_t s4 = newstr.find(' ', s3 + 1);
		if (s4 == std::string::npos)
		{
			ct = newstr.substr(s3 + 1);
			return;
		}
		ct = newstr.substr(0, s4);

		size_t s5 = newstr.find(' ', s4 + 1);
		if (s5 == std::string::npos)
		{
			mc = newstr.substr(s4 + 1);
			return;
		}
		mc = newstr.substr(0, s5);

		size_t s6 = newstr.find(' ', s5 + 1);
		if (s6 == std::string::npos)
		{
			mt = newstr.substr(s5 + 1);
			return;
		}
		mt = newstr.substr(0, s6);

		size_t s7 = newstr.find(' ', s6 + 1);
		if (s7 == std::string::npos)
		{
			so = newstr.substr(s6 + 1);
			return;
		}
		so = newstr.substr(0, s7);

		size_t s8 = newstr.find(' ', s7 + 1);
		if (s8 == std::string::npos)
		{
			st = newstr.substr(s7 + 1);
			return;
		}
		st = newstr.substr(0, s8);

		size_t s9 = newstr.find(' ', s8 + 1);
		if (s9 == std::string::npos)
		{
			gp = newstr.substr(s8 + 1);
			return;
		}
		gp = newstr.substr(0, s9);

		ms = newstr.substr(s1 + 1, s2 - s1 - 1);
		opna = newstr.substr(s2 + 1, s3 - s2 - 1);
		opno = newstr.substr(s3 + 1, s4 - s3 - 1);
		ct = newstr.substr(s4 + 1, s5 - s4 - 1);
		mc = newstr.substr(s5 + 1, s6 - s5 - 1);
		mt = newstr.substr(s6 + 1, s7 - s6 - 1);
		so = newstr.substr(s7 + 1, s8 - s7 - 1);
		st = newstr.substr(s8 + 1, s9 - s8 - 1);
		gp = newstr.substr(s9 + 1);

	}
	
	int* getOperand(const std::string& op, int& value)
	{
		if (op.empty())
			return nullptr;
		//if()
		


	}
		
	
};

void mainMenu()
{
	std::cout << "___________________________\n";
	std::cout << "Welcome to CDR\n";
	std::cout << "1.Sign Up\n";
	std::cout << "2.Login\n";
	std::cout << "3.Exit\n";
	std::cout << "Enter your choice\n";
}
















