#include<iostream>
#include<thread>

using namespace std;

void greet()
{
	cout << "Hello World!" << endl;
}
void display(int x)
{
	cout << "x : " << x << endl;
}
void modx(int& x)
{
	x *= 2;
}
int main()
{
	thread t1(greet);

	cout << "End of Program." << endl;//this executes first--main thread.
	t1.join();
	cout << "End of Program." << endl;
	//t1.join();//since the same thread is already joined aboven in the main thread,
	          //we should now chech if it is joinable or not.
	cout << endl;
	thread t2(display, 101);

	t2.join();
	
	cout << endl;
	int val = 10;

	thread t3(modx,ref(val));
	cout << "val : " << val << endl;
	t3.join();
	cout << "modval : " << val << endl;
	cout << endl;\


}
