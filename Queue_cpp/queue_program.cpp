#include <iostream>
using namespace std;
class Queue
{
    int *array;
    int capacity, front, rear, size;

public:
    Queue(int capacity)
    {
        this->capacity = capacity;
        this->array = new int[this->capacity];
        this->front = 0;
        this->rear = -1;
        this->size = 0;
    }
    ~Queue()
    {
        delete[] array;
    }

    void enqueue(int element);
    void dequeue();
    int Front();
    int Rear();
    bool isFull();
    bool isEmpty();
    void display();
    void Size();
};

void Queue::enqueue(int element)
{
    if (isFull())
    {
        cout << "Queue overflow! Can't enqueue " << element << endl;
    }
    else
    {
        array[++rear] = element;
        size++;
    }
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        cout << "Queue underflow! cannot dequeue from an empty queue." << endl;
    }
    else
    {
        cout << "Dequeued " << array[front] << " from the queue." << endl;
        front++;
        size--;
    }
}
void Queue::display()
{
    if (isEmpty())
    {
        cout << "Queue is empty!" << endl;
    }
    else
    {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << array[i] << " ";
        }
        cout << endl;
    }
}
int Queue::Front()
{
    if (isEmpty())
    {
        cout << "Queue is empty! Cannot get front element." << endl;
        return -1; // or some other error value
    }
    return array[front];
}
int Queue::Rear()
{
    if (isEmpty())
    {
        cout << "Queue is empty! Cannot get rear element." << endl;
        return -1; // or some other error value
    }
    return array[rear];
}
bool Queue::isFull()
{
    if (rear == capacity - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool Queue::isEmpty()
{
    if (front == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void Queue::Size()
{
    cout << "Size of queue: " << size << endl;
}
int main()
{
    int capacity;
    cout << "Enter the capacity of the queue: ";
    cin >> capacity;
    Queue queue(capacity);
    int choice, elements;
    do
    {
        // menu driven program for user to use stack according to the
            cout << "-----------------------------------\n";
            cout << "\t\tProgram to be Exicuted\t\t\n";
            cout << "-----------------------------------\n";
            cout << "Enter 0 to Exit\n";
            cout << "Enter 1 to add element in queue\n";
            cout << "Enter 2 to remove an element in queue\n";
            cout << "Enter 3 to check what is in front of queue \n";
            cout << "Enter 4 to check what is in rare of queue\n";
            cout << "Enter 5 to Display all element of queue \n";
            cout << "Enter 6 to check the Size of queue\n";

            cout << " Enter your choice : ";
            cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter element to enqueue: ";
            cin >> elements;
            queue.enqueue(elements);
            break;
        case 2:
            queue.dequeue();
            break;
        case 3:
            cout << "Front element: " << queue.Front() << endl;
            break;
        case 4:
            cout << "Rear element: " << queue.Rear() << endl;
            break;
        case 5:
            queue.display();
            break;
        case 6:
            queue.Size();
            break;
        case 7:
            cout << "Exiting the program." << endl;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 7);
    return 0;
}