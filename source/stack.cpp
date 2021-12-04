#include "stack.h"

stack::stack(int size)
{
	if (size <= 0)
	{
		cout << "Error: invalid size!\nProgram terminated\n";
		exit(EXIT_FAILURE);
	}
	elems = new queue<int>(size);
}

stack::~stack()
{
	delete elems;
}

int stack::top()
{
	return elems->front();
}

void stack::pop()
{
	elems->pop();
}

// The idea is to store each new element at the start of the queue not the end
// So that pop() and top() will affect the first elemnt in the queue which is the last element entered in the stack.
void stack::push(int value)
{
	//First, the new element is added at the end normally.
	elems->push(value);

	//Then, all the elements before the new element get moved after it using this loop.
	for (int i = 0; i < elems->size() - 1; i++)//we iterate until (size - 1) because we don't want to move the last element which is the new one.
	{
		int temp = elems->front();//first element stored in a temp variable.
		elems->pop();// then gets deleted from queue.
		elems->push(temp);// then the temp is added again to the queue but after the new element.
	}
}
