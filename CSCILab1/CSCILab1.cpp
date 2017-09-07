// CSCILab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;


//[9/6/2017 18:22] Cameron Osborn:  Display all elements of string typed vector parameter. 
void IterateThroughStringVector(vector<string> vec)
{
	for (vector<string>::iterator iterator = vec.begin(); iterator < vec.end(); ++iterator)
	{
		cout << *iterator << endl;
	}

}

int main()
{
	//Task #1: Manually store 3 lines of source code in a vector of strings
	//	Declare a vector of strings and name it myVect.Use the push_back method of the vector class to store the following three strings into myVect :
	//  "radius=2; ",
	//	"area=3.14*radius*radius;" and
	//	"display area;" .
	cout << "Task 1" << endl;
	cout << "No Output" << endl;

	vector<string> myVect;
	myVect.push_back("radius=2;");
	myVect.push_back("area=3.14*radius*radius;");
	myVect.push_back("display area;");


	//Task #2: Access the elements by their indices
	//	Write a loop to display all the elements myVect[i] in myVect one by one.
	cout << endl << endl << "Task 2" << endl;
	for (int i = 0; i < myVect.size(); i++)
	{
		cout << myVect[i] << endl;
	}


	//Task #3: Access the elements using an iterator
	//	Write a loop using a vector<string>::iterator iterator to iterate through the vector myVect and to display all the elements in myVect one by one.
	cout << endl << endl << "Task 3" << endl;

	//[9/6/2017 18:22] Cameron Osborn: Due to reuse of this procedure I refactored it to its own function above
	IterateThroughStringVector(myVect);


	//Task #4: Use an iterator to delete some content

	//	Call the erase method to delete the second element in myVect. (i.e. delete myVect[1] from the vector)
	//	Check the new contents : Write a loop using a vector<string>::iterator iterator to iterate through the vector myVect and to display all the elements in myVect one by one.
	cout << endl << endl << "Task 4" << endl;

	vector<string>::iterator itDel = myVect.begin() + 1;
	myVect.erase(itDel);
	IterateThroughStringVector(myVect);


	//Task #5: Use an iterator to insert new content
	//	Call the insert method of the vector class to insert a new string "display radius;" right before the element currently holding "display area;" in myVect.
	//	Check the new contents : Write a loop using a vector<string>::iterator iterator to iterate through the vector myVect and to display all the elements in myVect one by one.
	cout << endl << endl << "Task 5" << endl;

	vector<string>::iterator itIns = myVect.end() - 1;
	myVect.insert(itIns, "display radius;");
	IterateThroughStringVector(myVect);



	//Task #6: Clear the contents of the entire vector
	//	Call the clear method to clear the vector myVect into an empty vetor.
	//	Check the new contents : Write a loop using a vector<string>::iterator iterator to iterate through the vector myVect and to display all the elements in myVect one by one.
	cout << endl << endl << "Task 6" << endl;
	myVect.clear();
	IterateThroughStringVector(myVect);

	//Task #7: Use getline to read an arbitrary number of lines of source code into a vector of strings
	//	Declare a string object s and then write a loop which on each iteration(i) calls getline(cin, s) to read in a line into s, (ii) if the contents of s is neither an empty string nor the special string ".", calls the push_back method to store it in the end of the vector myVect, and (iii)the loop will terminate if the contents of s is special string "."
	//	Check the new contents : Write a loop using a vector<string>::iterator iterator to iterate through the vector myVect and to display all the elements in myVect one by one.
	cout << endl << endl << "Task 7" << endl;
	cout << "Task 7 Input:" << endl;
	string s;
	while (s != ".")
	{
		getline(cin, s);
		if (s != "." & s!="")
		{
			myVect.push_back(s);
		}
	}

	cout << endl << endl << "Task 7 Output:" << endl;
	IterateThroughStringVector(myVect);
	return 0;
}



