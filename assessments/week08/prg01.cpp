//Emulating a simple 16-Bit Microprocessor
//========================================

#include<iostream>
#include<string>
#include<fstream>
#include<vector>
//#include<unordered_set>

const int MAX = 16;
using namespace std;

//enum Instruction 
//{
//	MOV,ADD,SUB,MUL,DIV,HLT
//};

class microProcessor {
protected:
	int AX = 0;
	int BX = 0;
	int CX = 0;
	int DX = 0;
	vector<int>memory;
	bool run = 1;
public:
	microProcessor()
	{
		memory = vector<int>(16, 0);
	}
protected:
    void alter(const string& line1, string& instruction, string& op1, string& op2) {
        instruction = ""; op1 = ""; op2 = "";

        string line2 = line1;

        while (line2.find(',') != string::npos)
            line2[line2.find(',')] = ' ';

        string newstr = "";
        bool flag = 0;
        for (char a : line2)
        {
            if (a == ' ' || a == '\t') 
            {
                if (!flag && !newstr.empty()) {
                    newstr += ' ';
                    flag = true;
                }
            }
            else {
                newstr += a;
                flag = 0;
            }
        }
        
        size_t p1 = newstr.find(' ');
        if (p1 == string::npos) 
        {
            instruction = newstr;
            return;
        }

        instruction = newstr.substr(0, p1);
        size_t p2 = newstr.find(' ', p1 + 1);
        if (p2 == string::npos) {
            op1 = newstr.substr(p1 + 1);
            return;
        }

        op1 = newstr.substr(p1 + 1, p2 - p1 - 1);
        op2 = newstr.substr(p2 + 1);
    }
    int* getOperand(const string& op, int& value) {
        if (op.empty()) return nullptr;

        if (op.size() >= 2 && op[0] == '[' && op.back() == ']') {
            try {
                int i = stoi(op.substr(0, op.size() - 1));
                return &BX;
            }
            catch (const std::invalid_argument& e) {
                return &BX;
            }

        }
        else if (op == "AX")
        {
            return &AX;
        }
        else if (op == "BX")
        {
            return &BX;
        }
        else if (op == "CX")
        {
            return &CX;
        }
        else if (op == "DX")
        {
            return &DX;
        }
        value = stoi(op);


        return nullptr;
    }

    void move(int* destination, int* source, int value) {
        if (destination != nullptr)
        {
            if (source != nullptr)
                *destination = *source;
            else
                *destination = value;
        }
        else
            cout << "Invalid" << endl;
    }
    void addition(int* destination, int* source, int value) {
        if (destination != nullptr)
        {
            if (source != nullptr)
                *destination += *source;
            else
                *destination += value;
        }
        else
            cout << "Invalid" << endl;
    }
    void subtraction(int* destination, int* source, int value) {
        if (destination != nullptr)
        {
            if (source != nullptr)
                *destination -= *source;
            else
                *destination -= value;
        }
        else
            cout << "Invalid" << endl;
    }
    void multiplication(int* destination, int* source, int value) {
        if (destination != nullptr)
        {
            if (source != nullptr)
                *destination *= *source;
            else
                *destination *= value;
        }
        else
            cout << "Invalid" << endl;
    }
    void division(int* destination, int* source, int value) {
        if (destination != nullptr) 
        {
            int divisor;
            if (source != nullptr) 
            {
                divisor = *source;
            }
            else {
                divisor = value;
            }

            if (divisor == 0) 
            {
                cout << "Invalid" << endl;
            }
            else {
                *destination /= divisor;
            }
        }
        else {
            cout << "Invalid" << endl;
        }
    }
    
public:
    void executeOperation(const string&line1)
    {
        string instruction,op1,op2;
        int value = 0;

        alter(line1, instruction, op1, op2);
        int* destination = getOperand(op1, value);
        int* source = getOperand(op2, value);
        if (instruction == "MOV")
        {
            move(destination, source, value);
        }
        else if (instruction == "ADD")
        {
            addition(destination, source, value);
        }
        else if (instruction == "SUB")
        {
            subtraction(destination, source, value);
        }
        else if (instruction == "MUL")
        {
            multiplication(destination, source, value);
        }
        else if (instruction == "DIV")
        {
            division(destination, source, value);
        }
        else if (instruction == "HLT")
        {
            halt();
        }
    }
    void displayone()
    {
        cout << " Recevied Interrupt" << endl;
        cout << endl;
        cout << "Snapshot of the processor" << endl;
        cout << "AX: " << AX << endl;
        cout << "BX: " << BX << endl;
        cout << "CX: " << CX << endl;
        cout << "DX: " << DX << endl;
        cout << endl;
        cout << "First 16 Memory Contents" << endl;
        for (int i = 0;i < 16;i++)
        {
            cout << i << "->" << memory[i] << endl;
        }
    }
    void halt() {
        run = 0;
    }
    bool isRunning()const
    {
        return run;
    }
    
};
int main() {
    microProcessor M;

    ifstream file("instructions.txt");
    if (!file.is_open()) {
        cout << "Could not open instructions.txt\n";
        return 1;
    }

    string line;
    while (getline(file, line) && M.isRunning())
    {
        M.executeOperation(line);
    }

    M.displayone();
}


//void microProcessor::execInstruction()
//{
//	string input;
//	vector<string> instructions;
//	while (1)
//	{
//		cin >> input;
//		instructions.push_back(input);
//	}
//
//}


//void menu()
//{
//	cout << "Emulation of a Simple 16-bit Microprocessor" << endl;
//	cout << "___________________________________________" << endl;
//	cout << "MOV - to move instructions" << endl;
//	cout << "ADD - to perform addition operation" << endl;
//	cout << "SUB - to perform subtraction operation" << endl;
//	cout << "MUL - to perform multiplication operation" << endl;
//	cout << "DIV - to perform division operation" << endl;
//	cout << "HLT - to halt thr program execution" << endl;
//	cout << "===========================================" << endl;
//}


