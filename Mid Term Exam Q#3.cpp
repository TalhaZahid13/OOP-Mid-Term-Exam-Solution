// Mid Term Exam Q#3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;
class B1
{
	int i;
	int j;
	void g()
	{
		cout << "---HELLO---";
	}
};
class B2 : public B1
{
public:
	int j;
	void g()
	{
		cout << "---HELLO---";
	}
};
class D : public B2  
{
public:
	int i;
};
int main()
{
	D o;
	D *dptr = &o;
	dptr ->i = 5;
	dptr->j = 10;
	o.g();
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu
// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file