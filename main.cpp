#include "Queue.cpp"
#include <iostream>
using namespace std;

#define size_t 25

int main()
{
	Queue<int> q;
	cout << "Size of queue = "<< q.size() << endl;
	
	for (int i = 0; i < size_t; i++)
	{
		q.push(i);
	}
	cout << "Size of queue = "<< q.size() << endl;
	
	q.print(',');

	for (int i = 0; i < size_t; i++)
	{
		q.pop();
	}
	cout << "Size of queue = "<< q.size() << endl;

	return 0;
}