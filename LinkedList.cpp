//#include<iostream>
//#include<vector>
using namespace std;

#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr;
}


LinkedList::LinkedList(int v)
{
	head = new Node();
	head->value = v;
	head->next = nullptr;
}

LinkedList::LinkedList(vector<int> &v)
{
	head = new Node();
	int size = v.size();
	Node *tmp=nullptr,*prev=nullptr;
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if (i == 0)
			{
				head->value = v[i];
				head->next = nullptr;
				prev = head;
			}
			else 
			{
				tmp = new Node();
				tmp->value = v[i];
				tmp->next = nullptr;
				prev->next = tmp;
				prev = tmp;
				tmp = nullptr;
			}
		}
	}
}

void LinkedList::AddNode(int v)
{
	Node *tmp = nullptr;
	if (head != nullptr)
	{
		Node *prev = LastNode();
		tmp = new Node();
		tmp->value = v;
		tmp->next = nullptr;
		prev->next = tmp;
	}
	else
	{
		head = new Node;
		head->value = v;
		head->next = nullptr;
	}
}

void LinkedList::AddNode(vector<int> &v)
{
	Node *tmp=nullptr;
	Node *prev = LastNode();
	int size = v.size();
	if (size > 0)
	{
		for (int i = 0; i < size; i++)
		{
			if ((i==0)&&(head == nullptr))
			{
				head = new Node();
				head->value = v[0];
				head->next = nullptr;
			}
			else
			{
				tmp = new Node();
				tmp->value = v[i];
				tmp->next = nullptr;
				prev->next = tmp;
				prev = tmp;
				tmp = nullptr;
			}
		}
	}
}

bool LinkedList::IsEmpty()
{
	if (head == nullptr)
		return true;
	else
		return false;
}

bool LinkedList::DeleteNode(int v)
{
	Node* tmp = Search(v);
	Node* prev = nullptr;
	if (tmp)
	{
		prev= FindPrev(tmp);
		prev->next = tmp->next;
		delete tmp;
		tmp = nullptr;
		return true;
	}
	else
		return false;
}

Node* LinkedList::FindPrev(Node* tmp)
{
	if (head != nullptr)
	{
		Node* prev = head;
		while (prev->next != tmp)
		{
			prev = prev->next;
		}
		return prev;
	}
	else
		nullptr;
}

void LinkedList::ClearLinkedList()
{
	if (head)
	{
		Node* tmp = nullptr;
		while (head != nullptr)
		{
			tmp = head;
			head = head->next;
			delete tmp;
			tmp = nullptr;
		}
	}
}

Node* LinkedList::LastNode()
{
	if (head)
	{
		Node *tmp = head;
		while (tmp->next != nullptr)
		{
			tmp = tmp->next;
		}
		return tmp;
	}
	else
		return nullptr;
}

Node* LinkedList::Search(int v)
{
	if (head)
	{
		Node *tmp = head;
		while (tmp->next != nullptr)
		{
			if (tmp->value == v)
				return tmp;
			else
				tmp = tmp->next;
		}
		return nullptr;
	}
	else
		return nullptr;
}

int LinkedList::Length()
{
	Node* tmp = head;
	int count = 0;
	while (tmp != nullptr)
	{
		count++;
		tmp = tmp->next;
	}
	return count;
}

