#pragma once
template <typename T> struct q_node
{
    T 			value;
    q_node <T>* next;
};

template <typename T> class Queue
{
private:
    q_node<T>* head;
    q_node<T>* tail;
public:
    Queue();
    bool    		push(T elem);
    T       		pop();
    unsigned int  	size();
    void			print(char);
};

