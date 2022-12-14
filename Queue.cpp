#include "Queue.h"
#include "debug_defs.h"
#include <iostream>
using namespace std;

//constructor
template <typename T> Queue<T>::Queue()
{
	this->head = this->tail = NULL;
}


// push element to the queue
template <typename T> bool    Queue<T>::push(T elem)
{
	// if queue is empty
	if (this->head == NULL && this->tail == NULL)
	{
		q_node<T>* temp = new q_node<T>;
		temp->value = elem;
		temp->next = NULL;
		this->head = this->tail = temp;
		return true;
	}
	
	// if queue has only one object          
	else if (this->head == this->tail) 
	{
		q_node<T>* temp = new q_node<T>;
		temp->value = elem;
		temp->next = NULL;
		this->head->next = temp;
		this->tail = this->head->next;
		return true;
	}
	
	// if queue has more then one objects
	else if (this->head != this->tail && this->head && this->head)
	{
		q_node<T>* temp = new q_node<T>;
		temp->value = elem;
		temp->next = NULL;
		this->tail = this->tail->next = temp; // i lost a half and hour for find this mistake ;-D
		return true;
	}
	
	return false;
}

//pop out element form the queue
template <typename T> T Queue<T>::pop()
{
	// if queue has only one objects
	if (this->head == this->tail) 
	{
		q_node<T>* temp = this->head;
		T value = temp->value; 
		this->head = this->tail = NULL;
		delete temp;
		return value;
	} 

	// if qeueue has more then one objects
	else
	{
		q_node<T>* temp = this->head;
		T value = temp->value; 
		this->head = this->head->next;
		delete temp;
		return value;	
	}
	return 0;
}

//checkout the size of the queue
template <typename T> unsigned int  Queue<T>::size()
{
	q_node<T>* temp = this->head;
	unsigned int i = 0;
	while (temp != NULL)
	{
		i++;
		temp = temp->next;
	}
	return i;
}

//print the queue
template <typename T> void  Queue<T>::print(char separator)
{
	q_node<T>* temp = this->head;
	while (temp != NULL)
	{
		
		cout << temp->value;
		temp = temp->next;
		if (temp) cout << separator;
	}
	cout << endl;
	return;
}