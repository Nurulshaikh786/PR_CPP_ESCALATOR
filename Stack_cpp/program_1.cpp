#include<iostream>
#include<string>
using namespace std;

class Stack{
    public:
        int *array;
        int top , capacity;

        Stack(int capacity){
            this->capacity=capacity;
            this->array=new int[this->capacity];
            this->top=-1;
        }
        ~Stack(){
            delete[] array;
        }
};

    class Methods :public Stack{
        public:
        Methods(int capacity) : Stack(capacity) {}
        void push(int element);
        void pop();
        void peek();
        bool Isempty();
        bool Isfull();
        void Display();
        int size();

        };
        void Methods::push(int element) 
        {
            if (top == capacity - 1) 
            {
                cout << "Stack is overflow! you can't push " << element << endl;
                return;
            }
            array[++top] = element;
            cout << "Pushed " << element << " into the stack." << endl;
        }

        //method to pop from an stack
        void Methods::pop()
        {
            if (top == -1) 
            {
                cout << "Stack is underflow! you can't pop from an empty stack." << endl;
                return;
            }
                cout << "Popped " << array[top] << " from the stack." << endl;
                top--;
        }

        //method to display peek element of the stack
        void Methods::peek()
        {
             if (top == -1)
            {
                cout << "Stack is empty! Cannot peek." << endl;
                return;
            }   
                cout << "Top element is: " << array[top] << endl;
        }

        //method to check if stack is empty 
        bool Methods::Isempty()
        {
            return top == -1;
        }

        //method to check if stack is full
        bool Methods::Isfull()
        {
            return top == capacity-1;
        }

        //method to display all element in the stack
        void Methods::Display()
        {
            if (top == -1)
            {
                cout<<"Stack is empty!!"<<endl;
            }
            else
            {
                cout<<"Elemnts In stack are : ";
                for(int i = 0 ; i <= top ; i++ )
                {
                    cout<<array[i]<<" ";
                }
                cout<<endl;
            }
        }

        //method to check the size of stack
        int Methods::size()
        {
            return top + 1;
        }

        //main funtction
        //main funtction
        int main(){
            int capacity;
            cout << "Enter capacity of stack : ";
            cin >> capacity;
            Methods stack(capacity);
            int choice , element;
 
            do 
            {
        // menu driven program for user to use stack according to the
            cout << "-----------------------------------\n";
            cout << "\t\tProgram to be Exicuted\t\t:\n";
            cout << "-----------------------------------\n";
            cout << "Enter 0 to Exit\n";
            cout << "Enter 1 to Push an element in stack\n";
            cout << "Enter 2 to Pop an element in stack\n";
            cout << "Enter 3 to check what is in Peek of stack \n";
            cout << "Enter 4 to check stack Ismpty\n";
            cout << "Enter 5 to check stack IsFull\n";
            cout << "Enter 6 to Display alleleent of stack \n";
            cout << "Enter 7 to check the Size of stack\n";

            cout << " Enter your choice : ";
            cin >> choice;

            // Process user choice
            switch (choice) {
            case 1:  // Push operation
                cout << "Enter element to push: ";
                cin >> element;
                stack.push(element);
                break;
            case 2:  // Pop operation
                stack.pop();
                break;
            case 3:  // Peek operation
                stack.peek();
                break;
            case 4:  // Check if empty
                if (stack.Isempty())
                    cout << "Stack is empty." << endl;
                else
                    cout << "Stack is not empty." << endl;
                break;
            case 5:  // Check if full
                if (stack.Isfull())
                    cout << "Stack is full." << endl;
                else
                    cout << "Stack is not full." << endl;
                break;
            case 6:  // Display stack
                stack.Display();
                break;
            case 7:  // Show size
                cout << " Size Of Stack : " << stack.size() << endl;
                break;
            case 0:  // Exit program
                cout << "Exiting the program...." << endl;
                break;
            }
    } while (choice != 0);

    return 0;
}
        


        





