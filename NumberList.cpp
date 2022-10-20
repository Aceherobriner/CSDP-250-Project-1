//Name: Israel Showell
//Project Name: CSDP 250-Project#1
//Date Created: 10/12/22



#include "NumberList.hpp"
#include <iostream>
using namespace std;


NumberList::NumberList() {
	head = nullptr;
}

NumberList::~NumberList(){
	ListNode* nodePtr = nullptr;
	ListNode* nextNode = nullptr;
	nodePtr = head;
	while (nodePtr) {
		nextNode = nodePtr->next;
		delete nodePtr;
		nodePtr = nextNode;
	}
}


void NumberList::appendNode(int id, double gpa) {
	ListNode* newNode;
	ListNode* nodePtr;
	newNode = new ListNode;
	newNode->id = id;
	newNode->gpa = gpa;
	newNode->next = nullptr;

	if (!head) {
		head = newNode;
	}
	else {
		nodePtr = head;
		while (nodePtr->next) {
			nodePtr = nodePtr->next;
		}
		nodePtr->next = newNode;
	}

}

void NumberList::displayList() const {
	ListNode* nodePtr;
	nodePtr = head;

	while (nodePtr) {
		cout << "Student's ID: " << nodePtr->id << "   Student's GPA: " << nodePtr->gpa << endl;
		nodePtr = nodePtr->next;
	}

}

void NumberList::deleteNode(int id) {
	ListNode* nodePtr;
	ListNode* previousNode = nullptr;

	if (!head) {
		return;
	}
	if (head->id == id) {
		nodePtr = head->next;
		delete head;
		head = nodePtr;
	}
	else {
		nodePtr = head;
		while (nodePtr != nullptr && nodePtr->id != id) {
			previousNode = nodePtr;
			nodePtr = nodePtr->next;
		}
		if (nodePtr) {
			previousNode->next = nodePtr->next;
			delete nodePtr;
		}
	}
}

void NumberList::insertNode(int id, double gpa) {
	ListNode* newNode, * nodePtr, * prevNode;
	newNode = new ListNode;
	newNode->id = id;
	newNode->gpa = gpa;

	if (head == NULL || head->id >= newNode->id) {
		newNode->next = head;
		head = newNode;
	}
	else {
		prevNode = head;
		while (prevNode->next != NULL && prevNode->next->id < prevNode->id) {
			prevNode = prevNode->next;
		}
		newNode->next = prevNode->next;
		prevNode->next = newNode;
	}
}