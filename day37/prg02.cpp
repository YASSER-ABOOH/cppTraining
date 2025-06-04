#include<iostream>

using namespace std;

template<typename T,size_t N>
class myArray
{
	T* arr;
public:
	myArray(initializer_list<T> list)
	{
		if (list.size() > N)
			throw length_error("Too many arguments");
		this->arr = new T[N];
		int i = 0;
		for (const T& val : list)
		{
			arr[i++] = val;
			//cout << "arr" << val << endl;
		}
		//for initializing the remaining values to th defualt value of the datatype
		for (;i < N;i++)
			arr[i] = T{};
	}
	void display()
	{
		for (int i = 0;i < N;i++)
			cout << arr[i] << endl;
	}
};

int main()
{
	try
	{
		myArray<int, 5>arr = { 1,2,3 };
		arr.display();
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}

}