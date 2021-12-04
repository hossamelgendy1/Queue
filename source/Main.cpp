#include "stack.h"
#include <string>

void queueTest();
void stackTest();

int main()
{
    cout << "======================================\n"
        << "1- test \"queue\" class\n"
        << "2- test \"stack with one queue\" class\n"
        << "======================================\n";
    int testChoice;
    cin >> testChoice;
    switch (testChoice)
    {
    case 1:
        queueTest();
        break;
    case 2:
        stackTest();
        break;
    default:
        cout << "Invalid test choice!\n";
        break;
    }
    
}

void queueTest()
{
    cout << "Testing \"queue\" class...\n\n"
        << "Choose the data type for the queue\n"
        << "1- int     2- float     3- string\n";
    int dataType, size;
    cin >> dataType;
    cout << "Enter size of the queue: ";
    cin >> size;
    switch (dataType)
    {
    case 1:
    {
        queue<int> myQueue(size);
        cout << "A queue of \"int\" with size " << size << " is created\n\n";
        int choice = 0;
        while (choice != 5)
        {
            cout << "1- Add element\n"
                << "2- Remove element\n"
                << "3- Get element\n"
                << "4- Get current queue size\n"
                << "5- Exit\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Enter element: ";
                int element;
                cin >> element;
                try
                {
                    myQueue.push(element);
                    cout << "Element added successfully.\n\n";
                }
                catch (const char* msg)
                {
                    cout << msg << endl;
                }
                break;
            case 2:
                try
                {
                    myQueue.pop();
                    cout << "Element removed successfully.\n\n";
                }
                catch (const char* msg)
                {
                    cout << msg << endl;
                }
                break;
            case 3:
                cout << "First element: " << myQueue.front() << endl << endl;
                break;
            case 4:
                cout << "current size: " << myQueue.size() << endl << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice!\n\n";
                break;
            }
        }
        break;
    }
    case 2:
    {
        queue<float> myQueue(size);
        cout << "A queue of \"float\" with size " << size << " is created\n\n";
        int choice = 0;
        while (choice != 5)
        {
            cout << "1- Add element\n"
                << "2- Remove element\n"
                << "3- Get element\n"
                << "4- Get current queue size\n"
                << "5- Exit\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
                cout << "Enter element: ";
                float element;
                cin >> element;
                try
                {
                    myQueue.push(element);
                    cout << "Element added successfully.\n\n";
                }
                catch (const char* msg)
                {
                    cout << msg << endl;
                }
                break;
            case 2:
                try
                {
                    myQueue.pop();
                    cout << "Element removed successfully.\n\n";
                }
                catch (const char* msg)
                {
                    cout << msg << endl;
                }
                break;
            case 3:
                cout << "First element: " << myQueue.front() << endl << endl;
                break;
            case 4:
                cout << "current size: " << myQueue.size() << endl << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice!\n\n";
                break;
            }
        }
        break;
    }
    case 3:
    {
        queue<string> myQueue(size);
        cout << "A queue of \"string\" with size " << size << " is created\n\n";
        int choice = 0;
        while (choice != 5)
        {
            cout << "1- Add element\n"
                << "2- Remove element\n"
                << "3- Get element\n"
                << "4- Get current queue size\n"
                << "5- Exit\n";
            cin >> choice;
            switch (choice)
            {
            case 1:
            {
                cout << "Enter element: ";
                string element;
                cin >> element;
                try
                {
                    myQueue.push(element);
                    cout << "Element added successfully.\n\n";
                }
                catch (const char* msg)
                {
                    cout << msg << endl;
                }
                break;
            }
            case 2:
                try
                {
                    myQueue.pop();
                    cout << "Element removed successfully.\n\n";
                }
                catch (const char* msg)
                {
                    cout << msg << endl;
                }
                break;
            case 3:
                cout << "First element: " << myQueue.front() << endl << endl;
                break;
            case 4:
                cout << "current size: " << myQueue.size() << endl << endl;
                break;
            case 5:
                break;
            default:
                cout << "Invalid choice!\n\n";
                break;
            }
        }
        break;
    }
    default:
        cout << "Invalid data type choice!\n";
        break;
    }
}

void stackTest()
{
    cout << "Testing \"stack using one queue\" class...\n\n"
        << "Enter size of the stack: ";
    int size;
    cin >> size;
    stack myStack(size);
    int choice = 0;
    while (choice != 4)
    {
        cout << "1- Add element\n"
            << "2- Remove element\n"
            << "3- Get element\n"
            << "4- Exit\n";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter element: ";
            int element;
            cin >> element;
            try
            {
                myStack.push(element);
                cout << "Element added successfully.\n\n";
            }
            catch (const char* msg)
            {
                cout << msg << endl;
            }
            break;
        case 2:
            try
            {
                myStack.pop();
                cout << "Element removed successfully.\n\n";
            }
            catch (const char* msg)
            {
                cout << msg << endl;
            }
            break;
        case 3:
            cout << "Last element: " << myStack.top() << endl << endl;
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice!\n\n";
            break;
        }
    }
}
