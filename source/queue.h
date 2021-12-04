#include <iostream>
using namespace std;

template <typename type>
class queue
{
private:
	int maxSize; // maximum capacity of the queue
	int elemsCount; //current size of the queue
	type* elems; // array to store queue elements
public:
	queue();// – default constructor
	queue(type value, int intial_size);// – constructs a queue having ‘initial_size’ elements whose values are ‘value’.
	queue(int size); // constructs a queue of the given size
	~queue();// – a destructor to clear the queueand leave no memory leaks.
	type& front();// – returns the first element by reference.
	void pop();// – removes the first element.
	void push(type value);// – adds an element to the back of the queue.
	int size();//– returns the number of elements in the queue.
	bool isEmpty();// checks if the queue is empty
	bool isFull();// checks if the queue is full
};

// default size of the queue will be 10.
template<typename type>
inline queue<type>::queue()
{
	maxSize = 10;
	elemsCount = 0;
	elems = new type[maxSize];
}

template<typename type>
inline queue<type>::queue(type value, int intial_size)
{
	if (intial_size <= 0)
	{
		cout << "Error: invalid size!\nProgram terminated\n";
		exit(EXIT_FAILURE);
	}
	maxSize = intial_size;
	elemsCount = 0;
	elems = new type[maxSize];
	while (elemsCount < maxSize)
	{
		elems[elemsCount++] = value;
	}
}

template<typename type>
inline queue<type>::queue(int size)
{
	if (size <= 0)
	{
		cout << "Error: invalid size!\nProgram terminated\n";
		exit(EXIT_FAILURE);
	}
	maxSize = size;
	elemsCount = 0;
	elems = new type[maxSize];
}

template<typename type>
inline queue<type>::~queue()
{
	delete[] elems;
}

template<typename type>
inline type& queue<type>::front()
{
	if (isEmpty())
	{
		cout << "can't get the first element. The queue is empty.\nProgram terminated.\n";
		exit(EXIT_FAILURE);
	}
	return elems[0];
}

template<typename type>
inline void queue<type>::pop()
{
	if (isEmpty())
	{
		throw "There is no elements to pop. The queue is empty.\n";
	}
	for (int i = 0; i < elemsCount - 1; i++)
	{
		elems[i] = elems[i + 1];
	}
	elemsCount--;
}

template<typename type>
inline void queue<type>::push(type value)
{
	if (isFull())
	{
		throw "can't add this element. The queue is full.\n";
	}
	elems[elemsCount++] = value;
}

template<typename type>
inline int queue<type>::size()
{
	return elemsCount;
}

template<typename type>
inline bool queue<type>::isEmpty()
{
	return (elemsCount == 0);
}

template<typename type>
inline bool queue<type>::isFull()
{
	return (elemsCount == maxSize);
}

