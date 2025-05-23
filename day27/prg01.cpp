/*size: no of elements present in the array.
capacity : room to assign values of arr.

RULES;
1..whenever the size is equal to capacity,and we are adding another elementt ot the arr the capacity is doubled => resizing the array
 a.when array is resized we need to move the contents from ealier memory to new memory.
 

*/
#include<iostream>

using namespace std;

class myArray {
private:
	int* arr;
	int size;
	int capacity;
public:
	myArray()
	{
		capacity = 1;size = 0;arr = new int[capacity];
	}
	int push_back(int);
	int biggest();
	bool sortAsc();
	bool sortDesc();
	void printArray();
	int getsize()const;
	int getcapacity()const;
	void printArray();
	int resize();//called whenever size==cap
};
int myArray::resize()
{
	capacity = capacity * 2;
	int* newData = new int[capacity];
	//copy the contents of earlier data to new data
	for (int i = 0;i < size;i++)
		newData[i] == arr[i];
	delete[]arr;
	arr = newData;//arr is pointing to the new address
}

int myArray::getcapacity()const { return capacity; }
int myArray::getsize()const { return size; }
int myArray::push_back(int v)
{
	arr[size++] = v;
}

void myArray::printArray()
{
	for (int i = 0;i < size;i++)
		cout << arr[i];
	cout << endl;

}
int main()
{
	myArray a;
	cout << "Capacity = " << a.getcapacity() << endl;
	cout << "Size = " << a.getsize() << endl;
	cout << "Asc : " << endl;
	a.sortAsc();
	a.printArray();
	cout << "Desc : " << endl;
	a.sortDesc();
	a.printArray();
}