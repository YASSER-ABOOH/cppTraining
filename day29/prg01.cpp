//queue

#include<iostream>

const int MAX = 5;

using namespace std;

int front = 0;
int rear = 0;

int a[MAX];

int enqueue(int v)
{
	if (rear == MAX - 1)
	{
		cout << "Queue Full" << endl;
		return EXIT_SUCCESS;
	}
	a[rear] = v;
	rear++;

	return EXIT_SUCCESS;
}
int dequeue()
{
	if (rear == front||front==MAX)
	{
		cout << "Queue Empty" << endl;
		rear = 0;
		front = 0;
		return EXIT_SUCCESS;
	}
	cout << a[front] << " is dequeued" << endl;
	front++;
	return EXIT_SUCCESS;
}
void display()
{
	if (rear == front || front == MAX)
	{
		cout << "Queue Empty" << endl;
		rear = 0;
		front = 0;
		return;
	}
	cout << "Queue Elements are" << endl;
	for (int i = 0;i < MAX;i++)
		cout << a[i] << " ";
	cout << endl;
}

int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	dequeue();
	display();
	dequeue();
	display();

}