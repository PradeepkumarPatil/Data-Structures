//#include<iostream>
//#include<vector>
#include"LinkedList.h"
using namespace std;

bool recSearch(Node* h, int v)
{
	
	if (h == nullptr)
		return false;
	else if (h->value == v)
		return true;
	else
		recSearch(h->next, v);
}

int main()
{
	LinkedList l ;
	l.AddNode(10);
	cout << l.Length() << endl;
	l.AddNode(20);
	cout << l.Length() << endl;
	vector<int> v = { 3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21 };
	l.AddNode(v);
	cout << l.Length() << endl;
	if (l.Search(18))
	{
		cout << "Found" << endl;
	}
	else
	{
		cout << "Not Found" << endl;
	}
	//l.DeleteNode(14);
	cout << l.Length() << endl;
	//l.ClearLinkedList();
	cout << l.IsEmpty() << endl;
	cout << l.Length() << endl;
	Node* tmp = l.head;
	cout << "Recursive search: " << recSearch(tmp,18) << endl;
	tmp = l.head;
	cout << "Recursive search: " << recSearch(tmp, 1) << endl;
	return 0;
}
