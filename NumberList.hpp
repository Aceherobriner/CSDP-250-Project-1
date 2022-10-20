//Name: Israel Showell
//Project Name: CSDP 250-Project#1
//Date Created: 10/12/22


#ifndef NumberList_hpp
#define NumberList_hpp

#include <stdio.h>
class NumberList
{
private:
	struct ListNode
	{
		int id;
		double gpa;
		struct ListNode* next;
	};
	ListNode* head;
public:
	NumberList();
	~NumberList();
	void appendNode(int, double);
	void deleteNode(int);
	void displayList() const;
	void insertNode(int, double);


};

#endif // !NumberList_hpp
