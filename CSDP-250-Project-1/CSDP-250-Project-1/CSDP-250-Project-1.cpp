//Name: Israel Showell
//Project Name: CSDP 250-Project#1
//Date Created: 10/12/22



/*Project Description:
This is a simple program that can append, delete, insert, and display nodes containing a student's ID and GPA score.
*/



#include <iostream>
#include "NumberList.hpp"
using namespace std;


int main()
{
	NumberList list;

	int studentID = 0;
	double GPA = 0;

	//Adding Nodes
	cout << "The list of students at the start: " << endl;
	list.appendNode(192382, 3.8);
	list.appendNode(234323, 3.1);
	list.appendNode(120919, 4.0);
	list.appendNode(843202, 1.9);
	list.displayList();
	cout << "After deleting some of the results: " << endl;
	//Deleting Nodes
	list.deleteNode(192382);
	list.deleteNode(120919);
	list.insertNode(123323, 2.1);
	list.displayList();

	//A little test in case a user wants to enter a node on their own.
	/*cout << endl << "Input the student's 6 digit ID please: ";
	cin >> studentID;
	cout << "Input their GPA next: ";
	cin >> GPA;
	list.insertNode(studentID, GPA);
	cout << endl << "Here is your updated list!" << endl;
	list.displayList();
	*/


	system("PAUSE");
}

