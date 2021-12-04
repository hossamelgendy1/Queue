#include "queue.h"

class stack
{
private:
	queue<int>* elems; // queue container to store stack elements
public:
	stack(int size);
	~stack();
	int top();// – returns the top element.
	void pop();// – removes the top element.
	void push(int value);// – adds an element to the top of the stack.
};

