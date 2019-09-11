#pragma once
#include<iostream>
#include<vector>
using namespace std;

struct Node
{
public:
	struct Node* next;
	int value;
};


class LinkedList
{

public:
	Node* head=nullptr;
	LinkedList();
	LinkedList(int);
	LinkedList(vector<int> &v);
	void AddNode(int);
	void AddNode(vector<int>&v);
	bool DeleteNode(int);
	Node* Search(int);
	bool IsEmpty();
	Node* LastNode();
	void ClearLinkedList();
	Node* FindPrev(Node*);
	int Length();
};

