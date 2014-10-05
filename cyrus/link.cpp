#include <iostream>
using namespace std;
int a[] = { 1, 2, 1, 3, 6, 45, 23, 776, 21, 34, 6776, 8, 436546, 68, 425,56 };
typedef struct LinkedList
{
	int con;
	LinkedList* next;	
}node;

node* create()
{
	node *head, *p, *q;
	head = (node*)(malloc(sizeof(node)));
	q = head;
	for (int i = 0; i < sizeof (a) / 4; ++i)
	{
		
		p = (node*)(malloc(sizeof(node)));
		q->next = p;
		p->con = a[i];
		q = p;
	}
	head = head->next;
	q->next = head;

	return head;



}
int main() 
{
	node* head = create();
	node* p = head;
	for (int i = 1; p->next != p; i++)
	{
		if (i%5==4)
		{
		node* temp = p->next;
		cout <<temp->con
				<< endl;
			p->next = p->next->next;
			free(temp);
			
		}
		else
		{
			p = p->next;
		}
	}
	getchar();
}