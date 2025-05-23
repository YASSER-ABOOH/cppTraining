//Functions
//1.get Biggest of array elements
//2.get Array Sorted in Ascending Order
//3.get Array sorted in Descending Order

#include<iostream>

using namespace std;

const int MAX = 10;

class Array
{
private:
	int arr[MAX];
	int size;
public:
	void getArray();
	int biggestinArray();
	void ascendingArray();
	void descendingArray();
	void display();
};

void Array::getArray()
{
	cout << "Enter Array Size" << endl;
	cin >> size;
	cout << "Enter Array" << endl;
	for (int i = 0;i < size;i++)
	{
		
		cin >> arr[i];
	}
}
void Array::display()
{
	
	//int arr[i] = getArray();
	for (int i = 0;i < size;i++)

		cout << arr[i];
};

int Array::biggestinArray()
{
	int max = arr[0];
	for (int i = 1;i < size;i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	cout << "Biggest : " << max << endl;
	return max;
}

void Array::ascendingArray()
{
	for (int i = 0;i < size;i++)
	{
		int min = i;
		for (int j = i + 1;j < size;j++)
		{
			if (arr[j] < arr[min])
				min = j;
		}int t = arr[i];
		arr[i] = arr[min];
		arr[min] = t;
	}
}

void Array::descendingArray()
{
	for (int i = 0;i < size;i++)
	{
		int max = i;
		for (int j = i + 1;j < size;j++)
		{
			if (arr[j] > arr[max])
				max = j;
		}int t = arr[i];
		arr[i] = arr[max];
		arr[max] = t;
	}
}

int main()
{
	Array a;
	a.getArray();
	a.biggestinArray();

	a.ascendingArray();
	cout << "Ascending : ";
	a.display();
	cout << endl;
	cout << "Descending : ";
	a.descendingArray();
	a.display();
}