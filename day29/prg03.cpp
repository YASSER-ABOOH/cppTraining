#include<iostream>
#include<cstdlib>


using namespace std;

typedef struct node
{
	int data;
	struct node* next;
}NODE;

void dispList(NODE*);

int main()
{
	NODE* nn = NULL, * head = NULL, * temp = NULL;
	int ch = 1;
	while (ch)
	{
		nn = (NODE*)malloc(sizeof(NODE)); //create mem/nodes
		cout << "Enter Value of Node : " << endl;
		cin >> nn->data; //initializes value
		nn->next = NULL; //initializes value

		if (head == NULL)
		{
			//empty list

			head = nn; //first node
			temp = nn;
		}
		else
		{
			head->next = nn;
			head = head->next; // make a relationship
		}
		cout << "Add a new Node(0/1) : " << endl;
		cin >> ch;
	}

	head = temp; // head is again pointed to the BA of the list

	dispList(head);
}

void dispList(NODE* head)
{
	cout << "List is \n" << endl;
	while (head != NULL)
	{
		cout << head->data << " -> ";
		head = head->next;
	}
	cout << "NULL" << endl;
}
